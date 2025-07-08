#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    int score;
};

int main() {
    struct Student stuArr[3] = {
        {"zhangsan", 18, 100},
        {"lisi", 19, 99},
        {"wangwu", 20, 98}
    };
    stuArr[1].age = 100;
    for (int i = 0; i < 3; i++) {
        cout << "name: " << stuArr[i].name << " age: " << stuArr[i].age << " score: " << stuArr[i].score << endl;
    }
    return 0;
}