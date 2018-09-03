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
class Solution {
public:
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) 
    {
    	int i=0
    	vector<vector<int>> a;
    	queue<TreeNode*> line;
    	

    	if(expectNumber-root->val ==0)
    		if(!(root->left==nullptr && root-<right==nullptr))//如果已经找完但是还有叶子节点，则错误
    			line.push(nullptr);

    	if(expectNumber-root->val >0)
    		if(root->left == nullptr && root->right == nullptr)//如果找到叶子节点，但是还没凑齐，则错误
    			line.push(nullptr);

    	
    	if(expectNumber-root->val ==0)
    		if(root->left==nullptr && root-<right==nullptr)//如果已经找完且没叶子节点
    		{
    			while(!a.empty())//
    			{
    				a[i].push_back(line.front()->val);
    				line.pop()
    			}
    			i++;
    		}

    	if(root->left != nullptr)
    	{
    		if(line.back() != nullptr)
    		{
    			FindPath(root->left,expectNumber-root->val);
    			line.push(root);//满足条件就入队
    		}
    	}

    	if(root->right != nullptr)
    	{
    		if(line.back() != nullptr)
    		{
    			FindPath(root->right,expectNumber-root->val);
    			line.push(root);//满足条件就入队
    		}
    		else// 如果有nullptr
    		{
	    		line.pop();
	    		line.pop();
    		}
    	}



    	return a;
    }
};