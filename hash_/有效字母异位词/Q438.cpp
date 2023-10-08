#include<map>
/* ���������ַ��� s �� p���ҵ� s ������ p �� ��λ�� ���Ӵ���������Щ�Ӵ�����ʼ�����������Ǵ������˳��

��λ�� ָ����ͬ��ĸ�������γɵ��ַ�����������ͬ���ַ������� 
ʾ����
����: s = "cbaebabacd", p = "abc"
���: [0,6]
����:
��ʼ�������� 0 ���Ӵ��� "cba", ���� "abc" ����λ�ʡ�
��ʼ�������� 6 ���Ӵ��� "bac", ���� "abc" ����λ�ʡ�
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
        //�������ڼ�mapӦ��
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