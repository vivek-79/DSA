class Solution {
public:

    void levelorder (TreeNode* root ,vector<vector<int>> &ans){

        if(root==NULL) return;

        queue<TreeNode*>q;

        q.push(root);

        while( !q.empty()){

            int len=q.size();
            vector<int>level;

            for(int i=0;i<len;i++){

                TreeNode* Node= q.front();
                q.pop();
                if(Node ->left != NULL) q.push(Node->left);
                if(Node ->right != NULL) q.push(Node->right);
                level.push_back(Node->val);
            }

            ans.push_back(level);
        }

    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;

        levelorder(root,ans);
        return ans;
    }
};