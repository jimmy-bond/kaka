/* ���������������� nums1 �� nums2 ��������������ʽ����������Ľ�����
���ؽ����ÿ��Ԫ�س��ֵĴ�����Ӧ��Ԫ�������������ж����ֵĴ���һ�£�������ִ�����һ�£�����ȡ��Сֵ�������Բ�������������˳��
ʾ�� 1��

���룺nums1 = [1,2,2,1], nums2 = [2,2]
�����[2,2]
ʾ�� 2:

���룺nums1 = [4,9,5], nums2 = [9,4,9,8,4]
�����[4,9]
 */
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int , int> m;
        vector<int> ans;
        for(int num : nums1)
        {
            m[num]++;
        }
        for(int num : nums2)
        {
            if(m.find(num) != m.end())
            {
                ans.push_back(num);
                --m[num];
                if(m[num] == 0)
                { m.erase(num);//�������ɾ��
                }


            }
        }
        return ans;
    }
};