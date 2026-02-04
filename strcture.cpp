#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    float cgpa;

};

int main(){
    Student s1;

    s1.name = "Rifat";
    s1.age = 22;
    s1.cgpa = 3.75;

    cout << s1.name << endl;
    cout << s1.age <<endl;
    cout << s1.cgpa<<endl;

    return 0;
}