 /*
 1.Take a number N and find the sum of all odd numbers between 1 and N. 

#include <iostream>
using namespace std;

int main(){
    int N,sum =0;
    cin >> N;

    for (int i =1; i < N;i+=2){
        sum +=i;
    }
    cout << sum << endl;
    return 0;

}

2.Print squares of numbers from 1 to N 

#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for (int i =1 ; i<= N;i++){
        cout << i*i << endl;
    }
    return 0;
}

3.Take a number N and print the square of each number from 1 to N.

#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    for (int i=1;i<=N;i++){
        cout << i*i << endl;
    }
    return 0;
}

Take a number N and find its factorial using a for loop.

#include <iostream>
using namespace std;

int main(){
    int N;
    long long fact = 1;
    cin >> N;
    for (int i = 1;i <=N ; i++){
        fact *=i;
    }
    cout << fact << endl;
    return 0;
}

Print Your Name Multiple Times (As you wish).*/

#include <iostream>
using namespace std;

int main(){
    int times;
    cin >> times;

    for (int i=1;i <=times ; i++){
        cout << "R"<< endl;

    }
    return 0;
}
