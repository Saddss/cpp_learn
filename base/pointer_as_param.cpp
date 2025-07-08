#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    int score;
};
void printStudent1(const struct Student s) {
    //常量防止修改
    //s.name = "lisi";
    cout << s.name << " " << s.age << " " << s.score << endl;
}
void printStudent2(const struct Student* p) {
    //常量防止修改
    //p->name = "lisi";
    cout << p->name << " " << p->age << " " << p->score << endl;
}
int main() {
    Student s = {"zhangsan", 18, 100};
    printStudent1(s);
    printStudent2(&s);
    return 0;
}