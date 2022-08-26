#include <iostream>

using namespace std;

int main(){
    int value {5};
    value = value + 1;

    cout << "Value: " << value << endl;
    
    value = 5;
    cout << "The value is (postfix): " << value++ << endl;
    cout << "The value is: " << value << endl;
    cout << "" << endl;
    value = 5;
    cout << "The value is (prefix): " << ++value << endl;



    return 0;
}