#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname,int age){
    cout << fname <<"Refnes. "<<age <<"years old. \n";

}
int main(){
    myFunction("Lima",3);
    myFunction("Zara",22);
    myFunction("LAla",25);
    return 0;
}