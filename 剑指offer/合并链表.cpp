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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
    	if(pHead1 == nullptr && pHead2 != nullptr)
    		return pHead2;
    	if(pHead2 == nullptr && pHead1 != nullptr)
    		return pHead1;
    	if(pHead1 == nullptr && pHead2 == nullptr)
    		return nullptr;

    	ListNode* out = nullptr;

    	if(pHead1->val< pHead2->val)
    	{
    		out=pHead1;
    		out->next = Merge(pHead1->next,pHead2);
    	}
    	else
    	{
    		out = pHead2;
    		out -> next = Merge(pHead1,pHead2->next);
    	}
		return out;
    }
};