/* 给你一个字符串数组，请你将 字母异位词 组合在一起。可以按任意顺序返回结果列表。
字母异位词 是由重新排列源单词的字母得到的一个新单词，所有源单词中的字母通常恰好只用一次。
示例：
输入: strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
输出: [["bat"],["nat","tan"],["ate","eat","tea"]]
 */
//使用map<string, vector<string>> 其中string作为key，如果key相同时，则添加到vector<string> 中，而不会覆盖原来的值
//遍历map时，是遍历vector<string>而不是遍历单个string值
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
class Solution 
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> res;
        map<string, vector<string>> M;
        for(int i = 0; i < strs.size(); i++)
        {
            string key = strs[i];
            sort(key.begin(),key.end());
            M[key].push_back(strs[i]);
        }
        for(map<string,vector<string>>:: iterator it = M.begin(); it != M.end(); it++)
        {
            res.push_back(it->second);
        }
        return res;
    }
};
int main()
{
  

}