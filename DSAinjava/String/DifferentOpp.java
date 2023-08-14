public class DifferentOpp {
   static class String_Operations{
        public void Remove_char(String str){
            //remove first and last character of a String i
            str=str.substring(1,str.length()-1);
            System.out.println("After remove String="+str);

        }

        public void remove_char2(String str){
            StringBuilder string=new StringBuilder(str);
            string.deleteCharAt(str.length()-1);
            string.deleteCharAt(0);
            
            System.out.println("Using String Builder="+string.toString());
        }
        
        public void string_minus(){
            String a="Heelo";
            String b="ee";
            System.out.println(a.replace(b,""));
        }
    }
    public static void main(String args[]){
        String_Operations ob=new String_Operations();
        ob.Remove_char("Deepak");
        ob.remove_char2("Deepak");
        ob.string_minus();

    }
}
