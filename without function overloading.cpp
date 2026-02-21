/*
#include <iostream>
using namespace std;

int plusFuncInt(int x, int y){
    return x+y;

}
double plusFuncDouble(double x,double y){
    return x+y;
}

int main(){
    int myNum1 = plusFuncInt(8,5);
    double myNum2 = plusFuncDouble(4.3,6.26);
    cout << "Int:"<< myNum1 << "\n";
    cout <<"Double:"<<myNum2;
    return 0;
}
*/

//Function Overloading by Number of Parameters
#include <iostream>
using namespace std;

int plusFunc(int x, int y){
    return x+y;
}
int plusFunc(int x,int y,int z){
    return x+y+z;
}
int main(){
    int result1= plusFunc(3,7);
    int result2=plusFunc(1,2,4);

    cout << "Sum of 2 numbers:"<<result1 <<"\n";
    cout << "Sum of 3 numbers:"<<result2 << "\n";

    return 0;
}