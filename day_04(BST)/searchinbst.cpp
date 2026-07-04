class Solution {
public:
    TreeNode* search(TreeNode* root,int val){
        if(!root) return NULL;
        if(root->val==val) return root;
        if(root->val>val){
            return search(root->left,val);
        }
        if(root->val<val){
           return search(root->right,val);
        }
        return {};
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return NULL;

        return search(root,val);
        
    }
};