/*
#include <iostream>
#include <string>
using namespace std;

int main(){
    #// Create an array of strings
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    //loop through string
    for (int i = 0;i<5;i++){
        cout <<cars[i] << "\n";
    }
    return 0;
}


//example outputs the index of each element together with its value:
#include <iostream>
#include <string>
using namespace std;

int main(){
    string cars[5]={"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i =0;i<5;i++){
        cout <<i << "="<<cars[i] << "\n";
    }
    return 0;
}


//Loop through integers:

#include <iostream>
#include <string>
using namespace std;

int main(){
    //create an array of integers
    int myNumbers[5] = {10,27,40,50,67};

    //loop through integers
    for (int num:myNumbers){
        cout << num<< "\n";
    }
    return 0;

}
    */
    
//loop through string

#include <iostream>
#include <string>
using namespace std;

int main(){
    //create an array of strings

    string cars[5]={"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    //loop through strings
    for (string car:cars){
        cout << car << "\n";

    }
    return 0;
  
}