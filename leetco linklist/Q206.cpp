#include<iostream>
using namespace std;
//翻转链表，双指针法，原地翻转，用了三个变量，
//如果用新的链表来接受，太浪费空间
struct ListNode
{
    int val;
    ListNode* next;
    //链表节点的构造函数
     ListNode(int x): val(x) ,next(NULL){}
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution 
{
public:
    ListNode* reverseList(ListNode* head) 
    {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* slow;
        ListNode* fast;
        ListNode* tmp;
        slow = nullptr;
        fast = head;
        while(fast){
            tmp = fast->next;
            fast->next = slow;
            slow = fast;
            fast = tmp;
        }
        return slow;
    }
};
int main()
{

}