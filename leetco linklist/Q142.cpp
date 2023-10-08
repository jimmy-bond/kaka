//��������
//�ÿ���ָ���ж��Ƿ��лػ���ÿ�ο�ָ�����ָ������һ�������лػ�����һ��������
//
//�鿴�����Ƿ��лػ��������ص�һ������ػ�������ֵpos
struct ListNode
{
    int val;
    ListNode* next;
    //����ڵ�Ĺ��캯��
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
            // ����ָ����������ʱ��head �� �����㣬ͬʱ����ֱ������
            if (slow == fast) {
                ListNode* index1 = fast;
                ListNode* index2 = head;
                while (index1 != index2) {
                    index1 = index1->next;
                    index2 = index2->next;
                }
                return index2; // ���ػ������
            }
        }
        
        return nullptr;
    }
    
};