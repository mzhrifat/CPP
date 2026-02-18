/*
#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname){
    cout << fname << "Refsnes\n";
}

int main(){
    myFunction("Lima");
    myFunction ("Zarin");
    myFunction("Rafa");
    return 0;
}
    */

//Default parameter

#include <iostream>
#include <string>
using namespace std;

void myFunction(string country = "Norway"){
    cout << country << "\n";
}
int main(){
    myFunction("India");
    myFunction("BD");
    myFunction("Austia");
    return 0;
}
