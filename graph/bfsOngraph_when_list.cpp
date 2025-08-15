class Solution {
  public:
  
   void solve( int src , vector<vector<int>> &adj , vector<int> &vis , vector<int> &ans){
       queue <int> q; 
       q.push(src) ; 
       vis[src] = 1 ; 
       while(q.empty() == false){
           int node = q.front(); 
           q.pop(); 
           ans.push_back(node); 
           for(auto it : adj[node]){
               if (vis[it] == 0){
                   q.push(it); 
                   vis[it] = 1 ; 
               }
           }
       }
   }
  
  
    vector<int> bfs(vector<vector<int>> &adj) {
       int n = adj.size(); 
       vector<int> vis(n , 0 ); 
       vector<int>  ans; 
       solve(0 , adj , vis , ans) ; 
       return ans; 
    }
};