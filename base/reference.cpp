#include<iostream>
using namespace std;
//引用传递
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a = 20;
    int& b = a;
    // 引用必须初始化, 且一旦初始化后不能再改变
    // int& c;
    b = 30;
    cout << a << endl;
    cout << b << endl;

    int c = 10, d = 20;
    swap(c, d);
    cout << c << endl;
    cout << d << endl;
    return 0;
}