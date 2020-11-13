#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

    for (int i=0; i<4; i++){
    for (int j=0; j<4; j++){
    for (int k=2; k<4; k++){
        k=k+2;
        cout << "(" << i << "," << j << "," << k << ")\t";
        }
        }
        cout << endl;
        }
    
    return 0;
}

