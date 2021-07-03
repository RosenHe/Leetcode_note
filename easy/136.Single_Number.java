/*
Example:
Input: nums = [4,1,2,1,2]
Output: 4
*/

class Solution {
    public int singleNumber(int[] nums) {
        Set<Integer> st = new HashSet<>();
        for (int num : nums) {
            if (!st.add(num)) st.remove(num);
        }
        return st.iterator().next();
      }
}


class Solution {
    public int singleNumber(int[] nums) {
        int res = 0;
        for (int num : nums) res ^= num;
        return res;
    }
}
