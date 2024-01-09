//LeetCode
vector<map<long long,long long>>vt;
int ans=0;
long long a,b,x;
map<long long,long long>mpp;
vt.push_back(mpp);
for(int i=1;i<nums.size();i++){
    vt.push_back(mpp);
    for(int j=0;j<i;j++){
        int c=1;
        a=nums[i];
        b=nums[j];
        x=a-b;
        if(vt[j][x]>0){
            c+=vt[j][x];
            ans+=vt[j][x];
        }
        vt[i][x]+=c;
    }
}
return ans;
