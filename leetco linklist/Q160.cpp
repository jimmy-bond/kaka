struct ListNode
{
    int val;
    ListNode* next;
    //����ڵ�Ĺ��캯��
     ListNode(int x): val(x) ,next(nullptr){}
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
//�ҵ������ཻ������
//�ȱ������������ȣ�Ȼ��ʹ������ͬһ�������¸��Ա������ȵ����ǵ�ָ��ָ����ͬʱ��������ָ��
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