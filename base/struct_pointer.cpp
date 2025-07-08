#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    int score;
};

int main() {
    struct Student s1 = {
        "zhangsan",
        18,
        100
    };
    struct Student* p = &s1;
    cout << p->name << " " << p->age << " " << p->score << endl;
    return 0;
}