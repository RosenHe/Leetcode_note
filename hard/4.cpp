class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int x = nums1.size(), y = nums2.size();
        if(x > y) return findMedianSortedArrays(nums2, nums1);
        int low = 0, high = x;
        while(low <= high){
            int mid1 = (low+high)/2;
            int mid2 = (x+y+1)/2 -mid1;
            int leftX = (mid1 ==0)?INT_MIN : nums1[mid1-1];
            int rightX = (mid1 ==x)?INT_MAX : nums1[mid1];
            int leftY = (mid2 ==0)?INT_MIN : nums2[mid2-1];
            int rightY = (mid2 ==y)?INT_MAX : nums2[mid2];

            if(leftX <=rightY && leftY <=rightX){
                if((x+y)%2 ==0){
                    return ((double)max(leftX,leftY)+min(rightX, rightY))/2;
                }else{
                    return max(leftX,leftY);
                }
            }else if(leftX > rightY){
                high = mid1-1;
            }else{
                low = mid1+1;
            }
        }
        return -1;
    }
};
