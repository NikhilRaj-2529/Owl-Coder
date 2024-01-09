//GFG
int TotalWays(int n)
{
    // Code here
    int a=2,b=3;
    long long c;
    int mod=1e9+7;
    if(n==1) return a*a;
    else if(n==2) return b*b;
    else{
	n-=2;
	while(n--){
	    c=a+b;
	    c=c%mod;
	    a=b;
	    b=c;
	}
	return (1LL*c*c)%mod;
    }
}
