/* 给定两个数组 nums1 和 nums2 ，返回 它们的交集 。输出结果中的每个元素一定是 唯一 的。我们可以 不考虑输出结果的顺序 。
输入：nums1 = [1,2,2,1], nums2 = [2,2]
输出：[2] */
#include<vector>
#include<map>
#include<unordered_set>
using namespace std;
class Solution
 {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_set<int> ans; //用来存放答案
        unordered_set<int> n1(nums1.begin(), nums1.end());//存放num1的值，且没有重复，构造方法为用迭代器
        for(int num : nums2)
        {
            if(n1.find(num) != n1.end())
            {//find函数找到指定元素，它返回元素的迭代器，如果找不到指定元素，则返回指向unordered_set::end()的迭代器。
                ans.insert(num);
            }
        }//for_each的遍历方法
        return vector<int> (ans.begin(),ans.end());
    }
};