#include<iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode* next;
    //链表节点的构造函数
     ListNode(int x): val(x) ,next(nullptr){}
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
int main(){
     int a = 1;
     int* p = &a;
     cout<<p<<endl;
     cout<<*p<<endl;
}
