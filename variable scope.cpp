/*
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


//2
//A local variable cannot be used outside the function it belongs to.
// If you try to access it outside the function, an error occurs:

#include <iostream>
using namespace std;

void myFunction(){
    int x=5;
    cout << x;
}
int main(){
    myFunction();
    cout << x;
    return 0;
}
    */


    //3

//A variable created outside of a function is global and can therefore be used by anyone:
#include <iostream>
using namespace std;
//Global variable x
int x= 5;

void myFunction(){
    //we can use x here
    cout << x<<"\n";

}
int main(){
    myFunction();
    cout << x;
    return 0;
}