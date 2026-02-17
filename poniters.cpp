/*

#include <iostream>
#include <string>
using namespace std;
int main(){
    string food = "pizza";

    cout << food << "\n";
    cout <<&food << "\n";
    return 0 ;
}
    */
//2 pointer

#include <iostream>
#include <string>
using namespace std;

int main(){
    string food = "pizza";
    string * ptr = &food ;
    cout << food << "\n";
    cout << &food << "\n";

    cout << ptr << "\n";

    return 0;
}