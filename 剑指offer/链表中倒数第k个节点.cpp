//输入一个链表，输出该链表中倒数第k个结点
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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) 
    {
    	
    	if(pListHead ==nullptr ||k ==0)//头指针错误
    		return nullptr;
    	ListNode *pioneer = pListHead;
    	ListNode *folower = pListHead;;
    	
    	for(int i =0;i<k-1;i++)
    	{
    		if(pioneer->next == nullptr)//如果长度不足k，则返回nullptr
    			return nullptr;
    		pioneer = pioneer->next;
    	}
    	//folower = folower->next;

    	while(pioneer->next != nullptr)
    	{
    		pioneer = pioneer->next;
    		folower = folower->next;
    	}
    	return folower;
    
    }
};