/*problem 1
#include <iostream>
using namespace std;

int main(){
    int A , B,X;
    cin >> A >> B;
    X=A+B;
    cout << "x=" << X <<endl;
    return 0;
}
    
 //problem 2
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double R ,A;
    double pi = 3.14159;
    cin >> R;
    A=pi*R*R;
    cout << fixed<<setprecision(4);
    cout << "A="<<endl;
    return 0;
}
    
//4 simple product
#include <iostream>
using namespace std;

int main(){
    int A,B,PROD;
    cin >> A>>B;
    PROD=A*B;
    cout << "PROD="<<PROD<<endl;
    return 0;
}


//3 simple sum

#include <iostream>
using namespace std;

int main(){
    int A,B,SOMA;
    cin>>A,B;
    SOMA=A+B;
    cout<<"SOMA="<<SOMA<<endl;
    return 0;

}

//average1

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double A,B,MEDIA;
    cin>>A>>B;
    MEDIA=(A*3.5+B*7.5)/11.0;
    cout<<fixed<<setprecision(5);
    cout<<"MEDIA ="<<MEDIA<<endl;
    return 0;
}
//average 2
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C, MEDIA;
    
    cin >> A >> B >> C;
    
    MEDIA = (A * 2 + B * 3 + C * 5) / 10.0;
    
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << MEDIA << endl;
    
    return 0;
}
    */

//Difference

#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, DIFERENCA;
    
    cin >> A >> B >> C >> D;
    
    DIFERENCA = A * B - C * D;
    
    cout << "DIFERENCA = " << DIFERENCA << endl;
    
    return 0;
}
