class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char, int> map;
        int left = -1;
        int answer = 0;
        for(int i =0; i<s.size();i++){
            if(map.count(s[i])&& map[s[i]] > left){ //如果新的repeat number 在left右边。
                left = map[s[i]];
            }
            map[s[i]] = i;
            answer = max(answer, i - left);

        }
        return answer;
    }
};
