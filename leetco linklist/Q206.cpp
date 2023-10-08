#include<iostream>
using namespace std;
//��ת����˫ָ�뷨��ԭ�ط�ת����������������
//������µ����������ܣ�̫�˷ѿռ�
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