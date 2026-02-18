/*
#include <iostream>
#include <string>
using namespace std;

int myFunction(int x){
    return 5+x;
}

int main(){
    cout << myFunction(3);
    return 0;
}
   

#include <iostream>
#include <string>
using namespace std;

int myFunction(int x,int y ){
    return x+y;
}
int main(){
    cout << myFunction(5,3);
    return 0;
}
 */

//You can also store the result in a variable:
#include <iostream>
#include <string>
using namespace std;

int myFunction(int x,int y){
    return x+y;
}
int main(){
    int z= myFunction(5,5);
    cout << z;
    return 0;
}
