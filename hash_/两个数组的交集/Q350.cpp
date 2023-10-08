/*����������������?nums1 �� nums2 ��������������ʽ����������Ľ��������ؽ����ÿ��Ԫ�س��ֵĴ�����
Ӧ��Ԫ�������������ж����ֵĴ���һ�£�������ִ�����һ�£�����ȡ��Сֵ�������Բ�������������˳��
*/
#include<vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
      unordered_set<int> n1 (nums1.begin(),nums1.end());
      unordered_set<int> result;
      for(int n : nums2)
      {
        if(n1.find(n) != n1.end())
        {
            result.insert(n);
        }
      }
      return vector<int>(result.begin(),result.end());
    }
};