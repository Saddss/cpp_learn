#include <iostream>
using namespace std;

int* func_stack() {
    int a = 10;  // 栈内存
    return &a;   // 返回栈变量的地址 - 危险！
}

int main() {
    int* p = func_stack();
    cout << "Stack version:" << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    return 0;
}