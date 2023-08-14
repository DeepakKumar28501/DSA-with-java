package Threads;

 class Threadscls extends Thread {
    public void run(){// run is predefine function in Thread class here we have to override run method
        for(int i=0;i<5;i++){
            System.out.println("Child Threads");
        }
    }
}   

class Mythreads{
    public static void main(String[] args) {
        Threadscls th=new Threadscls();
        th.start();// start method is define in thread class its start the thread
        for(int i=0;i<5;i++){
            System.out.println("main Thread");
        }

        // now here two thread are running simultaneously
        
    }
}

