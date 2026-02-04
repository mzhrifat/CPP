/*
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
    */


//Access Structure Members
#include <iostream>
#include <string>
using namespace std;

int main(){
    struct{
        int myNum;
        string myString;
    }myStructure;

    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << "\n";

    cout << myStructure.myString << "\n";

    return 0;
}