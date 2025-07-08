#include <iostream>
using namespace std;

int* func_heap() {
    int* p = new int(10);  // 堆内存
    return p;              // 返回堆变量的地址 - 安全
}

int main() {
    int* p = func_heap();
    cout << "Heap version:" << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    
    delete p;  // 记得释放堆内存
    return 0;
}