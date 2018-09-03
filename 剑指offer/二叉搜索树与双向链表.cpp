//输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。要求不能创建任何新的结点，
//只能调整树中结点指针的指向。
/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/ //自己写对的，牛逼
class Solution 
{
public:
	vector<TreeNode*> queue1;
	
	void in_queue(TreeNode* root)
	{
		if(root->left)
			in_queue(root->left);
		queue1.push_back(root);
		if(root->right)
			in_queue(root->right);
	}

    TreeNode* Convert(TreeNode* pRootOfTree)
    {
    	if(!pRootOfTree)
    		return pRootOfTree;
    	in_queue(pRootOfTree);
    	int length = queue1.size();
    	for(int i=0;i<length-1;i++)
    	{
    		queue1[i]->right = queue1[i+1];
    		queue1[length-1-i]->left = queue1[length-i-2];
    	}
    	pRootOfTree = queue1[0];
    	return pRootOfTree;
    }
};