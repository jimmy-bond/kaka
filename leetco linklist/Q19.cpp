#include <iostream>
using namespace std;
//删除倒数的第N个节点
//用虚拟头节点和双指针，只需遍历一次，无需两次，时间更快
//双指针一般可以把需要两次遍历解决的问题换为一个
struct ListNode
{
    int val;
    ListNode* next;
    //链表节点的构造函数
     ListNode(int x): val(x) ,next(NULL){}
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {  
         if(!head | !head -> next) return NULL;
        ListNode * fast = head, *slow = head;
        for(int i = 0; i < n; i++){
            fast = fast -> next;
        }
        if(!fast){
            return head -> next;    
        }
        
        while(fast -> next){
            fast = fast -> next;
            slow = slow -> next;
        }
        slow -> next = slow -> next -> next;
        return head;
    }
};