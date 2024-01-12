#GFG
queue<int> modifyQueue(queue<int> q, int k) {
  // add code here.
  int n=q.size()-k;
  stack<int>st;
  while(k--){
      int t=q.front();
      st.push(t);
      q.pop();
  }
  while(!st.empty()){
      int t=st.top();
      q.push(t);
      st.pop();
  }
  while(n--){
      int t=q.front();
      q.pop();
      q.push(t);
  }
  return q;
}
