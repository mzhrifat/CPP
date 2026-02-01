/*
#include <iostream>
#include <string>
using namespace std;

int main(){
    string cars[5];
    cars[0] = "Volvo";
    cars[1] = "BMW";
    cars[2] = "Ford";
    cars[3] = "Mazda";
    cars[4] = "Tesla";
    for (int i=0;i<5;i++){
        cout <<cars[i] <<"\n";
    }
    return 0;

}
    

//Arrays - Fixed Size Example
#include <iostream>
#include <string>
using namespace std;

int main(){
    string cars[3]={"volvo","BMW","Ford"}

    cars[3]="Mazda";
    for (string car:cars){
        cout <<car << \"n";
    }
    return 0;

}
    */

//add a vector array

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <string> cars = {"volvo","BMW","Ford"};
    cars.push_back("Tesla");
    for (string car:cars){
        cout <<car <<"\n";
    }
    return 0;
}