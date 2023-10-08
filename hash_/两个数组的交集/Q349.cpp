/* ������������ nums1 �� nums2 ������ ���ǵĽ��� ���������е�ÿ��Ԫ��һ���� Ψһ �ġ����ǿ��� ��������������˳�� ��
���룺nums1 = [1,2,2,1], nums2 = [2,2]
�����[2] */
#include<vector>
#include<map>
#include<unordered_set>
using namespace std;
class Solution
 {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_set<int> ans; //������Ŵ�
        unordered_set<int> n1(nums1.begin(), nums1.end());//���num1��ֵ����û���ظ������췽��Ϊ�õ�����
        for(int num : nums2)
        {
            if(n1.find(num) != n1.end())
            {//find�����ҵ�ָ��Ԫ�أ�������Ԫ�صĵ�����������Ҳ���ָ��Ԫ�أ��򷵻�ָ��unordered_set::end()�ĵ�������
                ans.insert(num);
            }
        }//for_each�ı�������
        return vector<int> (ans.begin(),ans.end());
    }
};