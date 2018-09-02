//输入一颗二叉树的跟节点和一个整数，打印出二叉树中结点值的和为输入整数的所有路径。
//路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。(注意: 在返回值的list中，数组长度大的数组靠前)
/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/

class Solution 
{
    vector<vector<int> >allRes;
    vector<int> tmp;
    void dfsFind(TreeNode * node , int number)
    {
        tmp.push_back(node->val);
        if(number-node->val == 0 && !node->left && !node->right)
            allRes.push_back(tmp);
        else 
        {
            if(node->left) 
            	dfsFind(node->left, number-node->val);

            if(node->right) 
            	dfsFind(node->right, number-node->val);
        }
        tmp.pop_back(); 
    }
public:
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) 
    {
        if(root) 
        	dfsFind(root, expectNumber);
        return allRes;
    }
};