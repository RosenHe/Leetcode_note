class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> answer;
        helper(n, n, "", answer);
        return answer;
    }
    void helper(int left, int right, string ans, vector<string>& answer){
        if(left > right) return; //left will always less than right
        if(left == 0 &&right == 0) answer.push_back(ans);
        else{
            if(left>0) helper(left-1, right, ans+'(', answer);
            if(right>0) helper(left, right-1, ans+')', answer);
        }
    }
};
