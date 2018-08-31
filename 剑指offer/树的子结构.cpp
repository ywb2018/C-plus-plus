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
	bool match(TreeNode* root1,TreeNode* root2)
	{
		if(root2 == nullptr)
			return true;
		if(root1 == nullptr)
			return false;
		if(root1->val != root2->val)
			return false;
		return match(root1->left,root2->left)&&match(root1->right,root2->right);
	}
 
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
    	bool result = false;
    	
    	if(pRoot2!= nullptr && pRoot1 != nullptr)
    	{
    		if(pRoot1->val==pRoot2->val)
    			result = match(pRoot1,pRoot2);
    		if(!result)
    			result = HasSubtree(pRoot1->left,pRoot2);

    		if(!result)
    			result = HasSubtree(pRoot1->right,pRoot2);
    		
    	}
    	return result;
    }
};