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
    vector<int> PrintFromTopToBottom(TreeNode* root) 
    {

    	queue<TreeNode*> myprint;
    	vector<int> out;
    	if(root == nullptr)
    		return out;

    	myprint.push(root);

    	while(!myprint.empty())
    	{
	    	if(myprint.front()->left != nullptr)
	    		myprint.push(myprint.front()->left);
	    	if(myprint.front()->right != nullptr)
	    		myprint.push(myprint.front()->right);

	    	out.push_back(myprint.front()->val);
	    	myprint.pop();
    	}
    	return out;
    }

};