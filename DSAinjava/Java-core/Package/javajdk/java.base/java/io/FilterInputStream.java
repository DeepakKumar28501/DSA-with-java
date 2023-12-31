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

/**
 * A {@code FilterInputStream} wraps some other input stream, which it uses as
 * its basic source of data, possibly transforming the data along the way or
 * providing additional functionality. The class {@code FilterInputStream}
 * itself simply overrides select methods of {@code InputStream} with versions
 * that pass all requests to the wrapped input stream. Subclasses of
 * {@code FilterInputStream} may of course override any methods declared or
 * inherited by {@code FilterInputStream}, and may also provide additional
 * fields and methods.
 *
 * @author  Jonathan Payne
 * @since   1.0
 */
public class FilterInputStream extends InputStream {
    /**
     * The input stream to be filtered.
     */
    protected volatile InputStream in;

    /**
     * Creates a {@code FilterInputStream}
     * by assigning the  argument {@code in}
     * to the field {@code this.in} so as
     * to remember it for later use.
     *
     * @param   in   the underlying input stream, or {@code null} if
     *          this instance is to be created without an underlying stream.
     */
    protected FilterInputStream(InputStream in) {
        this.in = in;
    }

    /**
     * Reads the next byte of data from this input stream. The value
     * byte is returned as an {@code int} in the range
     * {@code 0} to {@code 255}. If no byte is available
     * because the end of the stream has been reached, the value
     * {@code -1} is returned. This method blocks until input data
     * is available, the end of the stream is detected, or an exception
     * is thrown.
     *
     * @implSpec
     * This method simply performs {@code in.read()} and returns the result.
     *
     * @return     the next byte of data, or {@code -1} if the end of the
     *             stream is reached.
     * @throws     IOException  if an I/O error occurs.
     * @see        java.io.FilterInputStream#in
     */
    @Override
    public int read() throws IOException {
        return in.read();
    }

    /**
     * Reads up to {@code b.length} bytes of data from this
     * input stream into an array of bytes. This method blocks until some
     * input is available.
     *
     * @implSpec
     * This method simply performs the call
     * {@code read(b, 0, b.length)} and returns
     * the result. It is important that it does
     * <i>not</i> do {@code in.read(b)} instead;
     * certain subclasses of  {@code FilterInputStream}
     * depend on the implementation strategy actually
     * used.
     *
     * @param      b   the buffer into which the data is read.
     * @return     the total number of bytes read into the buffer, or
     *             {@code -1} if there is no more data because the end of
     *             the stream has been reached.
     * @throws     IOException  if an I/O error occurs.
     * @see        java.io.FilterInputStream#read(byte[], int, int)
     */
    @Override
    public int read(byte[] b) throws IOException {
        return read(b, 0, b.length);
    }

    /**
     * Reads up to {@code len} bytes of data from this input stream
     * into an array of bytes. If {@code len} is not zero, the method
     * blocks until some input is available; otherwise, no
     * bytes are read and {@code 0} is returned.
     *
     * @implSpec
     * This method simply performs {@code in.read(b, off, len)}
     * and returns the result.
     *
     * @param      b     the buffer into which the data is read.
     * @param      off   the start offset in the destination array {@code b}
     * @param      len   the maximum number of bytes read.
     * @return     the total number of bytes read into the buffer, or
     *             {@code -1} if there is no more data because the end of
     *             the stream has been reached.
     * @throws     NullPointerException If {@code b} is {@code null}.
     * @throws     IndexOutOfBoundsException If {@code off} is negative,
     *             {@code len} is negative, or {@code len} is greater than
     *             {@code b.length - off}
     * @throws     IOException  if an I/O error occurs.
     * @see        java.io.FilterInputStream#in
     */
    @Override
    public int read(byte[] b, int off, int len) throws IOException {
        return in.read(b, off, len);
    }

    /**
     * Skips over and discards {@code n} bytes of data from the
     * input stream. The {@code skip} method may, for a variety of
     * reasons, end up skipping over some smaller number of bytes,
     * possibly {@code 0}. The actual number of bytes skipped is
     * returned.
     *
     * @implSpec
     * This method simply performs {@code in.skip(n)} and returns the result.
     *
     * @param      n   the number of bytes to be skipped.
     * @return     the actual number of bytes skipped.
     * @throws     IOException  if {@code in.skip(n)} throws an IOException.
     */
    @Override
    public long skip(long n) throws IOException {
        return in.skip(n);
    }

    /**
     * Returns an estimate of the number of bytes that can be read (or
     * skipped over) from this input stream without blocking by the next
     * caller of a method for this input stream. The next caller might be
     * the same thread or another thread.  A single read or skip of this
     * many bytes will not block, but may read or skip fewer bytes.
     *
     * @implSpec
     * This method returns the result of {@code in.available()}.
     *
     * @return     an estimate of the number of bytes that can be read (or
     *             skipped over) from this input stream without blocking.
     * @throws     IOException  if an I/O error occurs.
     */
    @Override
    public int available() throws IOException {
        return in.available();
    }

    /**
     * Closes this input stream and releases any system resources
     * associated with the stream.
     *
     * @implSpec
     * This method simply performs {@code in.close()}.
     *
     * @throws     IOException  if an I/O error occurs.
     * @see        java.io.FilterInputStream#in
     */
    @Override
    public void close() throws IOException {
        in.close();
    }

    /**
     * Marks the current position in this input stream. A subsequent
     * call to the {@code reset} method repositions this stream at
     * the last marked position so that subsequent reads re-read the same bytes.
     * <p>
     * The {@code readlimit} argument tells this input stream to
     * allow that many bytes to be read before the mark position gets
     * invalidated.
     *
     * @implSpec
     * This method simply performs {@code in.mark(readlimit)}.
     *
     * @param   readlimit   the maximum limit of bytes that can be read before
     *                      the mark position becomes invalid.
     * @see     java.io.FilterInputStream#in
     * @see     java.io.FilterInputStream#reset()
     */
    @Override
    public synchronized void mark(int readlimit) {
        in.mark(readlimit);
    }

    /**
     * Repositions this stream to the position at the time the
     * {@code mark} method was last called on this input stream.
     * <p>
     * Stream marks are intended to be used in
     * situations where you need to read ahead a little to see what's in
     * the stream. Often this is most easily done by invoking some
     * general parser. If the stream is of the type handled by the
     * parse, it just chugs along happily. If the stream is not of
     * that type, the parser should toss an exception when it fails.
     * If this happens within readlimit bytes, it allows the outer
     * code to reset the stream and try another parser.
     *
     * @implSpec
     * This method simply performs {@code in.reset()}.
     *
     * @throws     IOException  if the stream has not been marked or if the
     *               mark has been invalidated.
     * @see        java.io.FilterInputStream#in
     * @see        java.io.FilterInputStream#mark(int)
     */
    @Override
    public synchronized void reset() throws IOException {
        in.reset();
    }

    /**
     * Tests if this input stream supports the {@code mark}
     * and {@code reset} methods.
     *
     * @implSpec
     * This method simply performs {@code in.markSupported()}.
     *
     * @return  {@code true} if this stream type supports the
     *          {@code mark} and {@code reset} method;
     *          {@code false} otherwise.
     * @see     java.io.FilterInputStream#in
     * @see     java.io.InputStream#mark(int)
     * @see     java.io.InputStream#reset()
     */
    @Override
    public boolean markSupported() {
        return in.markSupported();
    }
}
