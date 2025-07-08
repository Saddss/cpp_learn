#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 20;
    //常量指针，指向可变，不可改变目标数值
    const int* p1 = &a;
    p1 = &b;
    cout << *p1 << endl;
    // 指针常量，指向不可变，可改变目标数值
    int* const p2 = &b;
    *p2 = 30;
    cout << b << endl;
    return 0;
}