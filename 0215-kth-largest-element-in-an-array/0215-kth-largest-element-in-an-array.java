class Solution {
    void swap(int[] nums, int i, int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    int partition(int[] nums, int low, int high){
        int pivot = nums[high];
        int i = low;

        for(int j = low; j < high; j++){
            if(nums[j] > pivot){ 
                swap(nums, i, j);
                i++;
            }
        }
        swap(nums, i, high);
        return i;
    }
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>(Comparator.reverseOrder());
        for(int i : nums){
            pq.offer(i);
        }
        for(int i = 0; i<k-1; i++){
            pq.poll();
        }
        return pq.poll();
        // int l = 0; 
        // int h = nums.length-1;
        // k = k-1;
        // while(l<=h){
        //     int pivot = partition(nums, l, h);
        //     if(pivot == k) return nums[pivot];
        //     else if(pivot<k) l = pivot+1;
        //     else h = pivot-1;
        // }
        // return -1;
    }
}