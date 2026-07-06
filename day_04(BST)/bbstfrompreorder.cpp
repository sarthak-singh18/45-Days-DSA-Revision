class Solution {
public:
    TreeNode* build(vector<int>& preorder,int &index,int lower,int upper){
       
        if(index==preorder.size() || lower>preorder[index] || upper<preorder[index]){
            return NULL;
        }
        TreeNode* root=new TreeNode(preorder[index++]);
        root->left=build(preorder,index,lower,root->val);
        root->right=build(preorder,index,root->val,upper);

        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return build(preorder,i,INT_MIN,INT_MAX);

    }
};
