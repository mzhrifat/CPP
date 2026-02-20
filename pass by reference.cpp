/*
//Pass an integer by reference:
#include <iostream>
#include <string>
using namespace std;

void changeValue(int &num){
    num = 50;
}
int main(){
    int value = 10;
    changeValue(value);
    cout << value;
    return 0;
}
*/

//Pass two integers by reference:

#include <iostream>
using namespace std;

void swapNums(int &x , int &y){
    int z= x;
    x=y;
    y=z;
}

int main(){
    int firstNum = 10;
    int secondNum = 20;
    cout << "Before swap:"<< "\n";
    cout << firstNum << secondNum << "\n";
    swapNums(firstNum ,secondNum);
    cout << "After swap:" << "\n";
    cout << firstNum << secondNum << "\n";

    return 0;

}