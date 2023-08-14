class StringPunctuationCount {
        public static void main(String[] args) {
        String str="Don't Say Anyth|ing!";
        int count=0;
        for(int i=0;i<str.length();i++){
            char ch=str.charAt(i);
            if(!((ch>=65 && ch<=91) || (ch>=97 && ch<=122)) && ch!=' ')
                count++;
        }
        System.out.println("Punctuation= "+count);
    }
}