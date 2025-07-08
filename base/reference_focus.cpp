#include<iostream>
using namespace std;
//局部变量传，会回收
int& func1() {
    int a = 10;
    return a;
}

//静态变量传没问题
int& func2() {
    static int a = 10;
    return a;
}

void func(const int& a) {
    //引用加const 相当于const int* const a,啥都不能变，防止形参修改
    // a += 10;
    cout << a << endl;
}
int main() {
    //引用的本质是指针常量,所以指向不可改，内容可改
    // int& ref = a  <==> int* const ref = &a
    // ref = 100 <==> *ref = 100
    int& ref = func2();
    cout << ref << endl;
    //返回引用的函数可以作为左值
    func2() = 20;
    cout << ref << endl;
    return 0;
}