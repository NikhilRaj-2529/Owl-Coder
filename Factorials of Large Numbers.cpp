//GFG
vector<int>vt;
vt.push_back(1);
int a,carry,f=0;
for(int i=2;i<=n;i++){
    carry=0;
    for(int j=0;j<vt.size();j++){
        a=(i*vt[j])+carry;
        carry=a/10;
        vt[j]=(a%10);
    }
    while(carry>0){
        f=carry%10;
        carry/=10;
        vt.push_back(f);
    }
}
reverse(vt.begin(),vt.end());
return vt;
