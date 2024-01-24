// Leet Code POTD
// Jan 24th 2024
int ans=0;
void solve(vector<int>&vis,TreeNode* root,int odd,int even){
    if(root==NULL) return;
    vis[root->val]++;
    if(root->left==NULL and root->right==NULL){
        for(int i=1;i<=9;i++){
            if(vis[i]%2==0) even++;
            else odd++;
        }
        if(odd==1 and even!=1) ans++;
        else if(odd==0) ans++;
    }
    solve(vis,root->left,odd,even);
    solve(vis,root->right,odd,even);
    vis[root->val]--;
}
int pseudoPalindromicPaths (TreeNode* root) {
    vector<int>vis(10,0);
    solve(vis,root,0,0);
    return ans;
}
