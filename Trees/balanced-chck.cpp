public:

    int ans(TreeNode* root){
        if(root==NULL) return 0;

        int lh = ans(root->left);
        if(lh==-1) return -1;

        int rh= ans(root->right);
        if(rh==-1) return -1;

        if(abs(lh-rh)>1) return -1;
        return 1+(max(lh,rh));
    }
    bool isBalanced(TreeNode* root) {
        
        return ans(root) !=-1;
    }
};