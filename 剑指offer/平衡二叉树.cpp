//输入一棵二叉树，判断该二叉树是否是平衡二叉树。
#include<algorithm>
class Solution {
public:
	int depth(TreeNode*node)
	{
		if(!node)
			return 0;
		return max(1+depth(node->left),1+depth(node->right));
	}
	
    bool IsBalanced_Solution(TreeNode* pRoot) 
    {

    	if(!pRoot)//空
    		return true;
    	
    	if(depth(pRoot->left)-depth(pRoot->right)>1 || depth(pRoot->left)-depth(pRoot->right)<-1)
    		return false;
    	return IsBalanced_Solution(pRoot->right)&& IsBalanced_Solution(pRoot->left);
    }
};