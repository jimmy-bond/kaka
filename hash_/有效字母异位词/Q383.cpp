#include<iostream>
using namespace std;
/* ���������ַ�����ransomNote �� magazine ���ж� ransomNote �ܲ����� magazine ������ַ����ɡ�

������ԣ����� true �����򷵻� false ��

magazine �е�ÿ���ַ�ֻ���� ransomNote ��ʹ��һ�Ρ� */
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       //�ж��Ƿ��ַ���
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