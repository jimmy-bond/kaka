/*给你四个整数数组 nums1、nums2、nums3 和 nums4 ，数组长度都是 n ，请你计算有多少个元组 (i, j, k, l) 能满足：

0 <= i, j, k, l < n
nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0


输入：nums1 = [1,2], nums2 = [-2,-1], nums3 = [-1,2], nums4 = [0,2]
输出：2
解释：
两个元组如下：
1. (0, 0, 0, 1) -> nums1[0] + nums2[0] + nums3[0] + nums4[1] = 1 + (-2) + (-1) + 2 = 0
2. (1, 1, 0, 0) -> nums1[1] + nums2[1] + nums3[0] + nums4[0] = 2 + (-1) + (-1) + 0 = 0

输入：nums1 = [0], nums2 = [0], nums3 = [0], nums4 = [0]
输出：1
*/
#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
            unordered_map <int,int> map1;
            unordered_map<int ,int> map2;
            //将两个vector数组作为一组计算它们相加在一起的值出现的次数
            for(int n1 : nums1)
            {
                for(int n2 : nums2)
                {
                    map1[n1 + n2]++;
                }
            }
                  int ans = 0;
                for(int n3 : nums3)
            {
                for(int n4 : nums4)
                {
                  if(map1.find(0 - n3-n4) != map1.end())
                  {
                    ans += map1[0-n3-n4];
                  }
                }
            }
    
    return ans;
    
    
    }
};
int main(int argc, const char** argv) {
    cout <<"  w"<<endl;
    cout<<"a s d"<<endl;
}