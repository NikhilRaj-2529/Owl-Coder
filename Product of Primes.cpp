# Segmented Seive
# GFG Program
int mod=1e9+7;
vector<long long>rprimes;
void seive(int n,vector<long long> &Primes){
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
void rangeprimes(int n,vector<long long> &Primes){
    for(int i=2;i<=sqrt(n);i++){
        if(Primes[i]==1) rprimes.push_back(i);
    }
}
long long prod(vector<long long> &arr,int l,int r,vector<long long> Primes){
    for(int i=0;i<rprimes.size();i++){
        long long p=l/rprimes[i];
        p*=rprimes[i];
        if(p<l) p+=rprimes[i];
        p=max(p,rprimes[i]*rprimes[i]);
        for(long long j=p;j<=r;j+=rprimes[i]){
            arr[j-l]=0;
        }
    }
    long long ans=1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            ans=(ans*(i+l))%mod;
        }
    }
    return ans;
}
long long primeProduct(long long l, long long r){
    // code here
    int n=1e6+1;
    vector<long long>Primes(n,1);
    seive(n,Primes);
    rangeprimes(r,Primes);
    vector<long long>arr(r-l+1,1);
    long long ans=1LL*(prod(arr,l,r,Primes));
    //for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
    return 1LL*ans;
}
