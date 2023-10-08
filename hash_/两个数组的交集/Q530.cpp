/* 给你两个整数数组 nums1 和 nums2 ，请你以数组形式返回两数组的交集。
返回结果中每个元素出现的次数，应与元素在两个数组中都出现的次数一致（如果出现次数不一致，则考虑取较小值）。可以不考虑输出结果的顺序。
示例 1：

输入：nums1 = [1,2,2,1], nums2 = [2,2]
输出：[2,2]
示例 2:

输入：nums1 = [4,9,5], nums2 = [9,4,9,8,4]
输出：[4,9]
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
                { m.erase(num);//把这个键删掉
                }


            }
        }
        return ans;
    }
};