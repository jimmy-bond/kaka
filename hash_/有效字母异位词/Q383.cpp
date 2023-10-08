#include<iostream>
using namespace std;
/* 给你两个字符串：ransomNote 和 magazine ，判断 ransomNote 能不能由 magazine 里面的字符构成。

如果可以，返回 true ；否则返回 false 。

magazine 中的每个字符只能在 ransomNote 中使用一次。 */
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       //判断是否够字符数
        if(ransomNote.size() > magazine.size())
        {
            return false;
        }
        int record[26] = {0};
        for(int i = 0; i < ransomNote.size(); i++)
        {
            record[ransomNote[i] - 'a']--;

        }
        for(int i = 0; i < magazine.size(); i++)
        {
            record[magazine[i] - 'a']++;

        }
        for(int i = 0; i < 26 ; i++)
        {
            if(record[i] < 0)
            {
                return false;
            }
        }
        return true;

    }
};