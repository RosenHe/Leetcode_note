class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
      vector<vector<int>> graph (numCourses, vector<int>());
        vector<int> visited (numCourses);
        vector<int> answer;
        for(auto a: prerequisites){ //graph
            graph[a[1]].push_back(a[0]);
        }
        for(int i = 0; i < numCourses; i++){
            if(CircleExist(graph, visited, i, answer)) return {};
        }
        reverse(answer.begin(), answer.end());
        return answer;

    }
    bool CircleExist(vector<vector<int>>& graph, vector<int>& visited, int curr,vector<int>& answer){
        if(visited[curr] == 1) return true; //visiting
        if(visited[curr] == 2) return false; //visited

        visited[curr] = 1;
        //loop neighbor (if prerequisites node also visiting, return true, that is circle exist)
        for(auto a: graph[curr]){
            if(CircleExist(graph,visited,a, answer)) return true;
        }
        visited[curr] = 2; // course finished->visited
        answer.push_back(curr);   //the deep node will be earlier push to the answer
        return false;
    }
};
