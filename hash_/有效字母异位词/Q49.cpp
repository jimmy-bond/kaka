/* ����һ���ַ������飬���㽫 ��ĸ��λ�� �����һ�𡣿��԰�����˳�򷵻ؽ���б�
��ĸ��λ�� ������������Դ���ʵ���ĸ�õ���һ���µ��ʣ�����Դ�����е���ĸͨ��ǡ��ֻ��һ�Ρ�
ʾ����
����: strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
���: [["bat"],["nat","tan"],["ate","eat","tea"]]
 */
//ʹ��map<string, vector<string>> ����string��Ϊkey�����key��ͬʱ������ӵ�vector<string> �У������Ḳ��ԭ����ֵ
//����mapʱ���Ǳ���vector<string>�����Ǳ�������stringֵ
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