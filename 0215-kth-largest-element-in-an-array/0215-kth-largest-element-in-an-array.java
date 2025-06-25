class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>(Comparator.reverseOrder());
        for(int i : nums){
            pq.offer(i);
        }
        for(int i = 0; i<k-1; i++){
            pq.poll();
        }
        return pq.poll();
    }
}