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
    ListNode* ReverseList(ListNode* pHead) 
    {
        if(pHead == nullptr)
            return nullptr;
    	ListNode *first = pHead;
    	ListNode *second = pHead;
    	ListNode *third =nullptr;
        ListNode *out = nullptr;
    	while(first != nullptr)
    	{
            first = first->next;
            if(first ==nullptr)
                out = second;
    		second->next = third;
    		third = second;
    		second = first;
    	}
    	return out;
    }
};