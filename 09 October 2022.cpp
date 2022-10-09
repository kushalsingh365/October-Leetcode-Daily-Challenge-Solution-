class Solution {
public:
    vector<int> v;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        map<int, int> mp;
        inorder(root);
        for(int i = 0; i < v.size(); i++){
            if(mp.find(k - v[i]) != mp.end())
                return true;
            mp[v[i]] = i;
        }
        return false;
    }
};
