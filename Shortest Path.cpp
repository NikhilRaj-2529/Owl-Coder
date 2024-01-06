#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int cnt=0;
    for(int i=0;i<32;i++){
        int c=a&(1<<i);
        int d=b&(1<<i);
        if(c!=d) cnt++;
    }
    if(cnt%2!=0 or cnt==0) cout<<"-1";
    else cout<<(cnt/2);
}
