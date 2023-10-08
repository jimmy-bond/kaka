/*给你两个整数数组?nums1 和 nums2 ，请你以数组形式返回两数组的交集。返回结果中每个元素出现的次数，
应与元素在两个数组中都出现的次数一致（如果出现次数不一致，则考虑取较小值）。可以不考虑输出结果的顺序。
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