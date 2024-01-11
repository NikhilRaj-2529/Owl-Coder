#include <bits/stdc++.h>
using namespace std;
long long n=1e6+1;
vector<long long>Primes(n,1);
void seive(){
    Primes[0]=0;
    Primes[1]=0;
    for(int i=2;i*i<=n;i++){
		if(Primes[i]){
			for(int j=i*i;j<n;j+=i){
				Primes[j]=0;
			}
		}
	}
}
int main() {
	// your code goes here
	int t,maxi=0;
	cin>>t;
	seive();
	while(t--){
	    int a,cnt=0;
	    cin>>a;
	    for(int i=3;i<=a;i+=2){
	        if(Primes[i]==1 and a>=i+2 and Primes[i+2]==1){
	            //cout<<Primes[i]<<" "<<i<<"\n";
	            cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	}
}
