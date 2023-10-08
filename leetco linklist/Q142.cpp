//环形链表
//用快慢指针判断是否有回环，每次快指针比慢指针先行一步，若有回环，则一定会相遇
//
//查看链表是否有回环，并返回第一个进入回环的索引值pos
struct ListNode
{
    int val;
    ListNode* next;
    //链表节点的构造函数
     ListNode(int x): val(x) ,next(nullptr){}
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution 
{
public:
    ListNode *detectCycle(ListNode *head) 
    {
           ListNode* fast = head;
        ListNode* slow = head;
        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            // 快慢指针相遇，此时从head 和 相遇点，同时查找直至相遇
            if (slow == fast) {
                ListNode* index1 = fast;
                ListNode* index2 = head;
                while (index1 != index2) {
                    index1 = index1->next;
                    index2 = index2->next;
                }
                return index2; // 返回环的入口
            }
        }
        
        return nullptr;
    }
    
};