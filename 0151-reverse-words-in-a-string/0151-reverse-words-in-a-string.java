class Solution {
    public String reverseWords(String s) {
        String[] parts = s.split("\\s+");
        StringBuilder str = new StringBuilder();

        for(int i = parts.length-1; i>=0; i--){
            str.append(parts[i]+" ");
        }

        return str.toString().trim();
        
    }
}