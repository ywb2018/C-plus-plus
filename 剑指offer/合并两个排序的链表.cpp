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
    	
        ListNode *p1a = pHead1, *p1b = pHead1->next;
        ListNode *p2a = pHead2, *p2b = pHead2->next;
        while(1)
        {
	        if(p1a->val <= p1b->val)//如果上面第一个小下面第一个
	        {
	        	while(p1a->val <= p2a->val &&  p1b->val <= p2a->val)
		        {
		        	p1a = p1b;
		        	p1b = p1b->next;
		        	if(p1b->next ==nullptr)//结束了也没找到跳变
		        	{
		        		p1a->next = p2a;
		        		return pHead2;//返回第二个
		        	}
		        	
		        }
		        //循环完说明找到跳变
		        p1a->next = p2a;
		        p2a->next = p1b;
		        p1a = p1b;
		        p1b = p1b->next;
		        p2a = p2b;
		        p2b = p2b->next;

		    }
		    else
		    {
		    	while(p2a->val <= p1a->val &&  p2b->val <= p1a->val)
		        {
		        	p2a = p2b;
		        	p2b = p2b->next;
		        	if(p2b->next ==nullptr)//结束了也没找到跳变
		        	{
		        		p2a->next = p1a;
		        		return pHead1;//返回第二个
		        	}
		        }
		        p2a->next = p1a;
		        p1a->next = p2b;
		        p2a = p2b;
		        p2b = p2b->next;
		        p1a = p1b;
		        p1b = p1b->next;
		    }
		}

    }
};