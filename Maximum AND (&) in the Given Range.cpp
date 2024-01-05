#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>vt(n);
    for(int i=0;i<n;i++) cin>>vt[i];
    int arr[n][32];
    for(int i=0;i<n;i++){
        int a=vt[i];
        for(int j=0;j<32;j++){
            if(a&(1<<j)) arr[i][31-j]=1;
            else arr[i][31-j]=0;
        }
    }
    for(int j=0;j<32;j++){
        for(int i=1;i<n;i++){
            arr[i][j]+=arr[i-1][j];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int l,r,ans=0;
        cin>>l>>r;
        int temp=r-l+1;
        if(l==0){
            for(int j=0;j<32;j++){
                if(arr[r][j]==temp){
                    ans+=pow(2,31-j);
                }
            }
        }
        else{
            for(int j=0;j<32;j++){
                if((arr[r][j]-arr[l-1][j])==temp) ans+=pow(2,31-j);
            }
        }
        cout<<ans<<endl;
    }
}
