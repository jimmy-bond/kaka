struct ListNode
{
    int val;
    ListNode* next;
    //链表节点的构造函数
     ListNode(int x): val(x) ,next(nullptr){}
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
//找到两个相交的链表
//先遍历两个链表长度，然后使他们在同一个长度下各自遍历，等到他们的指针指向相同时，返回其指针
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
     {
            int len_a = 0;
            int len_b = 0;
            ListNode* cur_a = headA;
            ListNode* cur_b = headB;
            while (cur_a )
            {
                cur_a = cur_a->next;
                len_a++;
            }
            while(cur_b)
            {
                cur_b = cur_b->next;
                len_b++;
            }
            cur_a = headA;
            cur_b = headB;
            if(len_b > len_a){
                int temp = len_a;
                len_a = len_b;
                len_b = temp;
                ListNode* tmp = cur_a;
                cur_a = cur_b;
                cur_b = tmp;
            }
            
                int n = len_a - len_b;
                while(n > 0)
                {
                    cur_a = cur_a->next;
                    n--;
                }
                while(cur_a)
                {
                    if(cur_a == cur_b)
                    {
                        return cur_a;
                    }
                    cur_a = cur_a->next;
                    cur_b = cur_b->next;
                }
            
        return nullptr;
    }
};