// #1305 All elements in Two Binary Search Trees
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
class Solution
{
public:
    void traversal(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
            return;
        traversal(root->left, v);
        v.push_back(root->val);
        traversal(root->right, v);
    }
    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {
        vector<int> tree1, tree2, res;
        traversal(root1, tree1);
        traversal(root2, tree2);
        for (int i = 0; i < tree1.size(); i++)
        {
            res.push_back(tree1[i]);
        }
        for (int i = 0; i < tree2.size(); i++)
        {
            res.push_back(tree2[i]);
        }
        sort(res.begin(), res.end());
        return res;
    }
};