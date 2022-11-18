/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector <int> allRightSide;
        if(!root) return allRightSide;
        queue <TreeNode*> q;
        q.push(root);
        int size;
        TreeNode* curNode;
        while(!q.empty())
        {
            size = q.size();
            for(int i = 0 ; i < size ; i++)
            {
                curNode = q.front();
                q.pop();
                
                if(curNode->left) q.push(curNode->left);
                if(curNode->right) q.push(curNode->right);
                if (i==size-1)
                {
                    allRightSide.push_back(curNode->val);
                }
            }
        }
        
        return allRightSide ;
    }
};