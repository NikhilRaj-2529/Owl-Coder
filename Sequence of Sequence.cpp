int numberSequence(int m, int n){
    // code here
    if(n>7) return 0;
    vector<int>vt(n);
    vt[0]=1;
    for(int i=1;i<n;i++){
        if(vt[i-1]*2>m) return 0;
        vt[i]=vt[i-1]*2;
    }
    int ans=1;
    int x=n-1;
    while(1){
        if(vt[x]+1<=m){
            int t;
            t=(vt[x]+1)*pow(2,n-x-1);
            if(t<=m){
                vt[x]+=1;
                ans++;
                for(int i=x+1;i<n;i++){
                    vt[i]=vt[i-1]*2;
                }
                x=n-1;
            }
            else x--;
        }
        else x--;
        if(x<0) break;
    }
    return ans;
}
