/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) 
    {
        map<int,int>node;
        ListNode*p = pHead1;
        while(p!=nullptr)
        {
        	node[p->val]++;
        	p = p->next;
        }
        p = pHead2;
        while(p!=nullptr)
        {
        	if(node[p->val]!=0)
	        	return p;
            p = p->next;
        }
        return nullptr;
    }
};