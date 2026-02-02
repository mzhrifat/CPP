/*
#include <iostream>
using namespace std;

int main(){
     string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  
  cout << letters[0][2];
  return 0;
}


//Change Elements in a Multi-Dimensional Array
#include <iostream>

using namespace std;

int main(){
    string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  letters[0][0] = "z";

  cout << letters [0] [0];
  return 0;
}
*/

//Loop Through a Multi-Dimensional Array
#include <iostream>
using namespace std;

int main(){
    string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      cout << letters[i][j] << "\n";
    }
  }
  return 0;
}