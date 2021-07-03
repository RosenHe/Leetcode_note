//source from https://www.cnblogs.com/grandyang/p/4377150.html
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = 0, ans = INT_MIN;
        for(int n :nums){
            cur = max(cur+n, n);
            ans = max(ans, cur);
        }
        return ans;
    }
};


//Method 2
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.empty()) return 0;
        return helper(nums, 0, (int)nums.size() - 1);
    }
    int helper(vector<int>& nums, int left, int right){
        if (left >= right) return nums[left];
        int mid = left + (right-left)/2;
        int lmax = helper(nums,left,mid-1);
        int rmax = helper(nums,mid+1,right);
        int mmax = nums[mid], t = mmax;
        for (int i = mid - 1; i >= left; --i) {
            t += nums[i];
            mmax = max(mmax, t);
        }
        t = mmax;
        for (int i = mid + 1; i <= right; ++i) {
            t += nums[i];
            mmax = max(mmax, t);
        }
        return max(mmax, max(lmax, rmax));

    }
};
