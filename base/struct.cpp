#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    int score;
};

int main() {
    Student s1 = {
        "zhangsan",
        18,
        100
    };
    cout << s1.name << endl;
    
    //struct可以省略
    struct Student s2 = {
        "lisi",
        19,
        99
    };
    cout << s2.name << endl;
    
    struct Student s3;
    s3.name = "wangwu";
    s3.age = 20;
    s3.score = 98;
    cout << s3.name << endl;
    
    return 0;
}