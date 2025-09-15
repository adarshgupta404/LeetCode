class Solution {
    public int findKthPositive(int[] arr, int k) {
        int c = 0;
        for(int i = 0; i<=arr.length-1; i++){
            if(arr[i]<=k + c){
                c++;
            }
        }
        return c+k;
    }
}