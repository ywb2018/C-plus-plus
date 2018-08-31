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
    void Mirror(TreeNode *pRoot) 
    {
    	if(pRoot==nullptr)
    		return;
    	TreeNode* newnode= nullptr;
    	if(pRoot != nullptr)
    	{
    		if(!(pRoot->left==nullptr&&pRoot->right==nullptr))//两个子节点不全为空
    		{
		    	newnode = pRoot;
		    	pRoot->left = pRoot->right;
		    	pRoot->right = pRoot->left;
		    }
	    }
    	Mirror(pRoot->left);
    	Mirror(pRoot->right);

    }
};