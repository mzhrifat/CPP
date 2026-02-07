/*
#include <iostream>
using namespace std;

enum Level{
    LOW,
    MEDIUM,
    HIGH
};

int main(){
    enum Level myVar = MEDIUM;
    cout << myVar;
    return 0;
}


#include <iostream>
using namespace std;

enum Color {RED,GREEN,BLUE};

int main(){
    Color c = BLUE;
    cout << c;
    return 0;
}
    */
//using variable

#include <iostream>
using namespace std;

enum Status {OFF,ON};

int main() {
    Status s = ON;

    if (s==ON){
        cout << "Device is ON";
    }
    
}