class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n, 0); //result array initial with all zero.
        stack<int> st; //stack that check temperatures.
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                //if current temperatures warnmer than the last one
                auto t = st.top(); st.pop();  //get the day index
                res[t] = i - t; //store the answer
            }
            st.push(i); //push the current index
        }
        return res;
    }
};
