// #1302 Deepest Leaves Sum
class Solution {
public:
    int max_level = 0, sum=0;
    void deepestLeavesSumUtil(TreeNode* root, int level) {
        if(root == NULL)
            return;
        if( level > max_level)
        {
            sum = root->val;
            max_level = level;
        }
        else if(level == max_level)
            sum += root->val;
        deepestLeavesSumUtil(root->left, level+1);
        deepestLeavesSumUtil(root->right, level+1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int level = 0;
        deepestLeavesSumUtil(root, level);
        return sum;
    }
};