#include<iostream>
using namespace std;
//�����������ڵĽڵ�ֵ
struct ListNode
{
    int val;
    ListNode* next;
    //����ڵ�Ĺ��캯��
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
//���������
        front = behind->next;
        }
        return head;
    }
};
int main()
{

}