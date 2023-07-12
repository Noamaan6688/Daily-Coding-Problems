class Solution {
public:
    bool dfs(vector<vector<int>> &graph, int src, vector<bool> &visited, vector<bool> &dfsVisited, set<int> &cycle){
        visited[src]=true;
        dfsVisited[src]=true;
        
        for(int i=0;i<graph[src].size();i++){
            int child=graph[src][i];
            if(visited[child]==false){
                if(dfs(graph,child,visited,dfsVisited,cycle)){
                    cycle.insert(child);
                    return true;
                }
            }else{
                if(dfsVisited[child]==true){
                    cycle.insert(child);
                    return true;
                }
            }
        }
        dfsVisited[src]=false;
        return false;
    }
 
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>> rev_graph(n);
        vector<int> out_deg(n,0);
        for(int i=0;i<n;i++){
            out_deg[i] += graph[i].size();
            for(int v : graph[i]) rev_graph[v].push_back(i);
        }
        queue<int> q;
        for(int i=0;i<n;i++) if(out_deg[i]==0) q.push(i);
        vector<bool> is_safe(n,false);
        while(q.size()>0){
            int node = q.front();q.pop();
            is_safe[node]=true;
            for(int child : rev_graph[node]){
                if(--out_deg[child] == 0) q.push(child);
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++) if(is_safe[i]) ans.push_back(i);
        return ans;
    }
};