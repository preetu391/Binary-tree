#include <bits/stdc++.h>
using namespace std;
//  * Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class CBTInserter
{
public:
    TreeNode *r;
    CBTInserter(TreeNode *root)
    {
        r = root;
    }

    int insert(int val)
    {
        queue<TreeNode*> q;
        q.push(r);
        TreeNode *newNode = new TreeNode(val);
        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();
            if (node->left && node->right)
            {
                q.push(node->left);
                q.push(node->right);
                continue;
            }
            if (!node->left)
            {
                node->left = newNode;
                return node->val;
            }
            if (!node->right)
            {
                node->right = newNode;
                return node->val;
            }
        }
        return 0;
    }

    TreeNode *get_root()
    {
        return r;
    }
};

/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(val);
 * TreeNode* param_2 = obj->get_root();
 */
int main()
{
    return 0;
}
