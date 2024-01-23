// Leetcode 23rd January POTD
int solution(vector<string> &vt,int ind,vector<string> &v){
        if(ind>=vt.size()){
            return 0;
        }
        v.push_back(vt[ind]);
        map<char,int>mpp;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++) mpp[v[i][j]]++;
        }
        bool flag=true;
        for(auto it:mpp){
            if(it.second>1){
                flag=false;
                break;
            }
        }
        int ans1,ans2;
        if(flag){
            ans1=vt[ind].size()+solution(vt,ind+1,v);
        }
        v.pop_back();
        ans2=solution(vt,ind+1,v);
        return max(ans1,ans2);
    }
    int maxLength(vector<string>& arr) {
        vector<string>v;
        return solution(arr,0,v);
    }
