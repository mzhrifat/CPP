#include <iostream>
using namespace std;

int main(){
    //An array storing different ages
    int ages[8]= {20, 22, 18, 35, 48, 26, 87, 70};

    float avg,sum = 0;
    int i;

    //Get the length of the array

    int length = sizeof(ages)/sizeof(ages[0]);

    //loop through the elements of the array 

    for (int age : ages){
        sum += age;

    }
    //calculate the average 
    avg = sum/length ;

    //print the average 
    cout << "The aveage age is " << avg << "\n";

    return 0;

}