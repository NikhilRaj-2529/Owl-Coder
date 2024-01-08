int ans=0;
void summ(TreeNode* root,int low,int high){
    if(root==NULL)return;
    //if(root->val<low || root->val>high)return;
    if(root->val>=low && root->val<=high)ans+=root->val;
    if(root->val>low)summ(root->left,low,high);
    if(root->val<high)summ(root->right,low,high);
}
int rangeSumBST(TreeNode* root, int low, int high) {
    summ(root,low,high);
    return ans;
}
