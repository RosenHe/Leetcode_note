//Brute Force runtime：41ms memory：38.4ms
class Solution {
    public int findLength(int[] nums1, int[] nums2) {
        int ans = 0;
        for(int i = 0; i< nums1.length; i++){
            for(int a = i,  b = 0; a<nums1.length&& b< nums2.length;){
                int cnt = 0;
                while(a<nums1.length && b< nums2.length &&nums1[a++] ==nums2[b++]){
                    cnt++;
                }
                ans = Math.max(ans, cnt);
            }
        }
        for(int i = 0; i< nums2.length; i++){
            for(int a = 0, b = i; a<nums1.length&& b< nums2.length;){
                int cnt = 0;
                while(a<nums1.length && b< nums2.length && nums1[a++] ==nums2[b++]){
                    cnt++;
                }
                ans = Math.max(ans, cnt);
            }
        }
        return ans;
    }
}

//dp runtime：81ms， memory 47.7mb
//  3 1 2
//1-0 1 0
//2-0 0 2
//2-0 0 1
//dp不等于零->nums1[i] = nums2[j]；
//当nums1[i] = nums2[j] 还要加上 dp【i-1】 && 【j-1】 因为subarray是连贯的。
class Solution {
    public int findLength(int[] nums1, int[] nums2) {
        int ans = 0;
        int[][] dp = new int[nums1.length+1][nums2.length+1];
        for(int i = 1; i<= nums1.length; ++i){
            for(int j = 1; j<= nums2.length;++j){//因为要算i-1，j-1 所以从1 开始loop。
                dp[i][j] = (nums1[i-1] ==nums2[j-1])? dp[i-1][j-1]+1 : 0;
                ans = Math.max(dp[i][j],ans);
            }
        }

        return ans;
    }
}
