/*����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ target  ���� ���� ���������������ǵ������±ꡣ

����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ�������ͬһ��Ԫ���ڴ��ﲻ���ظ����֡�

����԰�����˳�򷵻ش𰸡�

���룺nums = [2,7,11,15], target = 9
�����[0,1]
���ͣ���Ϊ nums[0] + nums[1] == 9 ������ [0, 1] ��

���ף�
��o��n^2�����õ��㷨
ֻ����һ����Ч��

���ҵ�һ��ֵȻ�������������֮���ֵ�Ƿ���ڼ���
*/
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i = 0; i < nums.size(); i++)
        {
            auto iter =m.find( target - nums[i]);
            if(iter != m.end()){
                return{iter->second,i};
            }
            
            m.insert(make_pair(nums[i],i));//map����ʱ��make_pair ����pair<int,int>
        }
        return {};
    }
        
        
   
};