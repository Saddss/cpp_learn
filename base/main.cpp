#include <iostream>
using namespace std;
#include "swap.h"

int add(int a, int b) {
    return a + b;
}


int main() {
    swap(10, 20);
    cout << add(1, 2) << endl;
}


