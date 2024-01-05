int numberOfBeams(vector<string>& bank) {
        int t=0,ans=0,num=0;
        for(int i=0;i<bank.size();i++){
            num=0;
            string s=bank[i];
            for(int j=0;j<s.size();j++){
                if(s[j]=='1') num++;
            }
            //cout<<bank[i]<<" "<<ans<<endl;
            if(num==0) continue;
            ans+=num*t;
            t=num;
        }
        return ans;
}
