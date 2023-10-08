#include<iostream>
using namespace std;
//两两交换相邻的节点值
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
    ListNode* swapPairs(ListNode* head) 
    {
        ListNode* front = head;
        ListNode* behind = nullptr;
        int temp;
        while(front&&front->next)
        {
            behind = front->next;
             temp = front->val;
            front->val = behind->val;
            behind->val = temp;
//交换两组后
        front = behind->next;
        }
        return head;
    }
};
int main()
{

}