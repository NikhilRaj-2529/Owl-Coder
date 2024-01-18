//1674B Dictionary
// Codeforces
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=int(s[0]-'a')*26 + int(s[1]-'a');
        if(s[0]>s[1]){
            ans-=int(s[0]-'a')-1;
        }
        else{
            ans-=int(s[0]-'a');
        }
        cout<<ans<<"\n";
    }
}
