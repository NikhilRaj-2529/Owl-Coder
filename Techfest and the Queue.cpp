vector<long long>s;
  void seive(int n){
      for(int i=0;i<=n;i++){
          s.push_back(i);
      }
      for(int i=2;i<=n;i++){
          if(s[i]==i){
              for(int j=2*i;j<=n;j+=i){
                  s[j]=i;
              }
          }
      }
  }
int sumOfPowers(int a, int b){
    seive(b);
    int ans=0;
    for(int i=a;i<=b;i++){
        int d=i;
        while(d!=1){
            //cout<<s[d]<<" ";
            d=d/s[d];
            ans++;
        }
        //cout<<"\n";
    }
    return ans;
}
