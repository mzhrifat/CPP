
//A variable created inside a function belongs to the local scope of that function, and can only be used inside that function
#include <iostream>
using namespace std;

void myFunction(){
    //local variable that belongs to myFunction
    int x=5;
    //print the variable x
    cout << x;
}
int main(){
    myFunction();
    return 0;
}