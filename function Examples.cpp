#include <iostream>
using namespace std;

//Function to convert Fahrenheit to Celcius
float toCelsius (float fahrenheit){
    return (5.0/9.0)*(fahrenheit - 32.0);
}
int main(){
    //set a fahrenheit value
    float f_value = 98.8;

    //call the function with the fahreheit value
    float result = toCelsius(f_value);

    //print the fahrenheit value
    cout << "Fahrenheit:"<<f_value << "\n";

    //print the result
    cout << "Convert Fahrenheit to Celsius:"<< result << "\n";
    return 0;

}
