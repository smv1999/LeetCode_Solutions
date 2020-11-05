// #938 Range Sum of BST
void getRangeSum(TreeNode *root, int L, int R, int *sum)
{
    if (root == NULL)
        return;
    getRangeSum(root->left, L, R, sum);
    if (root->val >= L && root->val <= R)
    {
        *sum += root->val;
    }
    getRangeSum(root->right, L, R, sum);
}
int rangeSumBST(TreeNode *root, int L, int R)
{
    int sum = 0;
    getRangeSum(root, L, R, &sum);
    return sum;
}