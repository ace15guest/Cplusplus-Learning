#include <iostream>

using namespace std;

int main(){
    // Read beyond bounds
    int numbers [] {1,2,3,4,5};
    cout << numbers[10] << endl;
    return 0;
}