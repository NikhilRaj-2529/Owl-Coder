// GFG Jan 23rd POTD
vector<int> findOrder(int n, int m, vector<vector<int>> pre) 
{
    //code here
    vector<vector<int>>vt(n);
    for(int i=0;i<pre.size();i++){
        vt[pre[i][1]].push_back(pre[i][0]);
    }
    vector<int>in(n,0);
    for(int i=0;i<vt.size();i++){
        for(auto it:vt[i]) in[it]++;
    }
    queue<int>q;
    for(int i=0;i<n;i++){
        if(in[i]==0) q.push(i);
    }
    vector<int>ans;
    while(!q.empty()){
        int t=q.front();
        q.pop();
        ans.push_back(t);
        for(auto it:vt[t]){
          in[it]--;
          if(in[it]==0) q.push(it);
      }
    }
    if(ans.size()==n) return ans;
    return {};
}
