class Solution {
private:
    int diameter;
    
    int longestPath(TreeNode* node) {
        if (node == nullptr) return 0;

        int leftPath = longestPath(node->left);
        int rightPath = longestPath(node->right);

        diameter = std::max(diameter, leftPath + rightPath);

        
        return std::max(leftPath, rightPath) + 1;
    }
    
public:
    int diameterOfBinaryTree(TreeNode* root) {
        diameter = 0;
        longestPath(root);
        return diameter;
    }
};