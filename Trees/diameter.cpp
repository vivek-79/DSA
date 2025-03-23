public:

    int path(TreeNode* root,int &maxi){

        if(root==NULL) return 0;
        
        int lh=path(root->left,maxi);
        int rh=path(root->right,maxi);

        maxi=max(maxi,lh+rh);

        return 1+ max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root ==NULL) return 0;
        int maxi=INT_MIN;
        
        path(root,maxi);
        return maxi;
    }
};