int minOperations(vector<int>& nums, int k) {
    int ans=0;
    for(int i=0;i<32;i++){
        int b=0,cnt=0;
        if(k&(1<<i)) b=1;
        else b=0;
        for(int j=0;j<nums.size();j++){
            if((nums[j]&(1<<i))>0) cnt++;
        }
        b=abs(cnt-b);
        if(b%2!=0) ans++;
    }
    return ans;
}
