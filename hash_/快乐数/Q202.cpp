/*��дһ���㷨���ж�һ���� n �ǲ��ǿ�������

���������� ����Ϊ��

����һ����������ÿһ�ν������滻Ϊ��ÿ��λ���ϵ����ֵ�ƽ���͡�
Ȼ���ظ��������ֱ���������Ϊ 1��Ҳ������ ����ѭ�� ��ʼ�ձ䲻�� 1��
���������� ���Ϊ 1����ô��������ǿ�������
��� n �� ������ �ͷ��� true �����ǣ��򷵻� false ��
���ӣ�
���룺n = 19
�����true
���ͣ�
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1*/
#include<unordered_set>
using namespace std;
class Solution {
public:
    int getsum(int a){
        int sum = 0;
        while(a != 0){
            sum += (a%10) *(a%10);
            a = a/10;
        }
        return sum;
    }
    bool isHappy(int n) 
    {
        unordered_set<int> num;
        while(n != 1)
        {
            n = getsum(n);
          
            if(num.find(n) != num.end())
            {
                return false;
            }
            else {
                num.insert(n);
            }
        }
        return true;
    }
};