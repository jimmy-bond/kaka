/*编写一个算法来判断一个数 n 是不是快乐数。

「快乐数」 定义为：

对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和。
然后重复这个过程直到这个数变为 1，也可能是 无限循环 但始终变不到 1。
如果这个过程 结果为 1，那么这个数就是快乐数。
如果 n 是 快乐数 就返回 true ；不是，则返回 false 。
例子：
输入：n = 19
输出：true
解释：
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1*/
#include<unordered_set>
using namespace std;
class Solution {
public:
    int getsum(int a){
        int sum = 0;
        while(a != 0){
            sum += (a%10) *(a%10);
            a = a/10;
        }
        return sum;
    }
    bool isHappy(int n) 
    {
        unordered_set<int> num;
        while(n != 1)
        {
            n = getsum(n);
          
            if(num.find(n) != num.end())
            {
                return false;
            }
            else {
                num.insert(n);
            }
        }
        return true;
    }
};