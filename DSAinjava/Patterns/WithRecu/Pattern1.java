package WithRecu;

public class Pattern1 {
    public static void main(String[] args) {
        Pattern1 ob=new Pattern1();
        // ob.tringle(5, 0);
        ob.tringle2(5, 0);
        
    }
    public void  tringle(int row,int col){
        if(row==0)
        return;
        if(col<row){
            System.out.print("*");
            tringle(row, col+1);
        }
        else{
            System.out.println();
            tringle(row-1, 0);
        }
    }

    public void tringle2(int row,int col){
        if(row==col)
        System.out.println();
        else
        System.out.println("row="+row+" col="+col);
        if(row==0)
            return;
        if(col<row){
            
            tringle2(row, col+1);
            System.out.print("*");
        }
        else{
            tringle2(row-1, 0);
            System.out.println();
        }
        

    }
}
