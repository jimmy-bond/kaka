#include <iostream>
using namespace std;
//ɾ�������ĵ�N���ڵ�
//������ͷ�ڵ��˫ָ�룬ֻ�����һ�Σ��������Σ�ʱ�����
//˫ָ��һ����԰���Ҫ���α�����������⻻Ϊһ��
struct ListNode
{
    int val;
    ListNode* next;
    //����ڵ�Ĺ��캯��
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