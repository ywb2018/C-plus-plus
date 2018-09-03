//输入一个复杂链表（每个节点中有节点值，以及两个指针，一个指向下一个节点，另一个特殊指针指向任意一个节点），
//返回结果为复制后复杂链表的head。（注意，输出结果中请不要返回参数中的节点引用，否则判题程序会直接返回空）
/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
    	if(!pHead)
    		return nullptr;
    	RandomListNode* slicenode = pHead;
        while(slicenode)
        {
        	RandomListNode* node = new RandomListNode(slicenode->label);
        	node->next = slicenode->next;
        	slicenode->next = node;

        	slicenode = node->next;
        }

        slicenode = pHead;
        while(slicenode)
        {
        	RandomListNode* node = slicenode->next;
        	if(slicenode->random)
        		node->random = slicenode->random->next;
        	slicenode = node->next;
        }
        //拆分
        RandomListNode* newhead = pHead->next;
        RandomListNode* tempt;
        slicenode = pHead;
        while(slicenode->next)
        {
        	tempt = slicenode->next;
        	slicenode->next = tempt->next;
        	slicenode = tempt;
        }
        return newhead;
    }
};