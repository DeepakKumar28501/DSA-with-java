/*
 * Copyright (c) 1994, 2021, Oracle and/or its affiliates. All rights reserved.
 * ORACLE PROPRIETARY/CONFIDENTIAL. Use is subject to license terms.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

package java.io;

import java.util.Enumeration;
import java.util.Objects;
import java.util.Vector;

/**
 * A {@code SequenceInputStream} represents
 * the logical concatenation of other input
 * streams. It starts out with an ordered
 * collection of input streams and reads from
 * the first one until end of file is reached,
 * whereupon it reads from the second one,
 * and so on, until end of file is reached
 * on the last of the contained input streams.
 *
 * @author  Author van Hoff
 * @since   1.0
 */
public class SequenceInputStream extends InputStream {
    Enumeration<? extends InputStream> e;
    InputStream in;

    /**
     * Initializes a newly created {@code SequenceInputStream}
     * by remembering the argument, which must
     * be an {@code Enumeration}  that produces
     * objects whose run-time type is {@code InputStream}.
     * The input streams that are  produced by
     * the enumeration will be read, in order,
     * to provide the bytes to be read  from this
     * {@code SequenceInputStream}. After
     * each input stream from the enumeration
     * is exhausted, it is closed by calling its
     * {@code close} method.
     *
     * @param   e   an enumeration of input streams.
     * @see     java.util.Enumeration
     */
    public SequenceInputStream(Enumeration<? extends InputStream> e) {
        this.e = e;
        peekNextStream();
    }

    /**
     * Initializes a newly
     * created {@code SequenceInputStream}
     * by remembering the two arguments, which
     * will be read in order, first {@code s1}
     * and then {@code s2}, to provide the
     * bytes to be read from this {@code SequenceInputStream}.
     *
     * @param   s1   the first input stream to read.
     * @param   s2   the second input stream to read.
     */
    public SequenceInputStream(InputStream s1, InputStream s2) {
        Vector<InputStream> v = new Vector<>(2);
        v.addElement(s1);
        v.addElement(s2);
        e = v.elements();
        peekNextStream();
    }

    /**
     * Continues reading in the next stream if an EOF is reached.
     */
    final void nextStream() throws IOException {
        if (in != null) {
            in.close();
        }
        peekNextStream();
    }

    private void peekNextStream() {
        if (e.hasMoreElements()) {
            in = e.nextElement();
            if (in == null)
                throw new NullPointerException();
        } else {
            in = null;
        }
    }

    /**
     * Returns an estimate of the number of bytes that can be read (or
     * skipped over) from the current underlying input stream without
     * blocking by the next invocation of a method for the current
     * underlying input stream. The next invocation might be
     * the same thread or another thread.  A single read or skip of this
     * many bytes will not block, but may read or skip fewer bytes.
     * <p>
     * This method simply calls {@code available} of the current underlying
     * input stream and returns the result.
     *
     * @return   an estimate of the number of bytes that can be read (or
     *           skipped over) from the current underlying input stream
     *           without blocking or {@code 0} if this input stream
     *           has been closed by invoking its {@link #close()} method
     * @throws   IOException  if an I/O error occurs.
     *
     * @since    1.1
     */
    public int available() throws IOException {
        if (in == null) {
            return 0; // no way to signal EOF from available()
        }
        return in.available();
    }

    /**
     * Reads the next byte of data from this input stream. The byte is
     * returned as an {@code int} in the range {@code 0} to
     * {@code 255}. If no byte is available because the end of the
     * stream has been reached, the value {@code -1} is returned.
     * This method blocks until input data is available, the end of the
     * stream is detected, or an exception is thrown.
     * <p>
     * This method
     * tries to read one character from the current substream. If it
     * reaches the end of the stream, it calls the {@code close}
     * method of the current substream and begins reading from the next
     * substream.
     *
     * @return     the next byte of data, or {@code -1} if the end of the
     *             stream is reached.
     * @throws     IOException  if an I/O error occurs.
     */
    public int read() throws IOException {
        while (in != null) {
            int c = in.read();
            if (c != -1) {
                return c;
            }
            nextStream();
        }
        return -1;
    }

    /**
     * Reads up to {@code len} bytes of data from this input stream
     * into an array of bytes.  If {@code len} is not zero, the method
     * blocks until at least 1 byte of input is available; otherwise, no
     * bytes are read and {@code 0} is returned.
     * <p>
     * The {@code read} method of {@code SequenceInputStream}
     * tries to read the data from the current substream. If it fails to
     * read any characters because the substream has reached the end of
     * the stream, it calls the {@code close} method of the current
     * substream and begins reading from the next substream.
     *
     * @param      b     the buffer into which the data is read.
     * @param      off   the start offset in array {@code b}
     *                   at which the data is written.
     * @param      len   the maximum number of bytes read.
     * @return     int   the number of bytes read.
     * @throws     NullPointerException If {@code b} is {@code null}.
     * @throws     IndexOutOfBoundsException If {@code off} is negative,
     *             {@code len} is negative, or {@code len} is
     *             greater than {@code b.length - off}
     * @throws     IOException  if an I/O error occurs.
     */
    public int read(byte[] b, int off, int len) throws IOException {
        if (in == null) {
            return -1;
        } else if (b == null) {
            throw new NullPointerException();
        }
        Objects.checkFromIndexSize(off, len, b.length);
        if (len == 0) {
            return 0;
        }
        do {
            int n = in.read(b, off, len);
            if (n > 0) {
                return n;
            }
            nextStream();
        } while (in != null);
        return -1;
    }

    /**
     * Closes this input stream and releases any system resources
     * associated with the stream.
     * A closed {@code SequenceInputStream}
     * cannot  perform input operations and cannot
     * be reopened.
     * <p>
     * If this stream was created
     * from an enumeration, all remaining elements
     * are requested from the enumeration and closed
     * before the {@code close} method returns.
     *
     * @throws     IOException  if an I/O error occurs.
     */
    public void close() throws IOException {
        IOException ioe = null;
        while (in != null) {
            try {
                in.close();
            } catch (IOException e) {
                if (ioe == null) {
                    ioe = e;
                } else {
                    ioe.addSuppressed(e);
                }
            }
            peekNextStream();
        }
        if (ioe != null) {
            throw ioe;
        }
    }
}
