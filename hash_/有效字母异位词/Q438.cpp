#include<map>
/* 给定两个字符串 s 和 p，找到 s 中所有 p 的 异位词 的子串，返回这些子串的起始索引。不考虑答案输出的顺序。

异位词 指由相同字母重排列形成的字符串（包括相同的字符串）。 
示例：
输入: s = "cbaebabacd", p = "abc"
输出: [0,6]
解释:
起始索引等于 0 的子串是 "cba", 它是 "abc" 的异位词。
起始索引等于 6 的子串是 "bac", 它是 "abc" 的异位词。
*/
#include<vector>
#include<iostream>
#include<algorithm>
#include<map>
#include <unordered_map>
using namespace std;
 class Solution {
public:
    vector<int> findAnagrams(string s, string p)
     {
        //滑动窗口加map应用
        vector<int> res;
        unordered_map<char,int> need,window;
        for(char c:p)
            need[c]++;
        int left = 0,right = 0;
        int value = 0;
        while(right<s.size()){
            char c = s[right];
            right++;
            if(need.count(c)){
                window[c]++;
                if(window[c]==need[c])
                    value++;
            }
            while(right-left>=p.size()){
                if(value==need.size()){
                    res.push_back(left);
                }
                char x = s[left];
                left++;
                if(need.count(x)){
                    if(window[x]==need[x]){
                        value--;
                    }
                    window[x]--;
                }
            }
        }
        return res;

    }
}; 
int main()
{
    
}