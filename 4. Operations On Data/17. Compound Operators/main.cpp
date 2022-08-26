#include <iostream>

using namespace std;

int main(){
    int value (45);

    cout << "The value is: " << value << endl;

    value +=5;

    cout << "The value is +=: " << value << endl;

    value -= 5;

    cout << "The value is -=: " << value << endl;

    value *= 5;

    cout << "The value is *=: " << value << endl;

    value /= 5;
    cout << "The value is: /=" << value << endl;

    value %=5;
    cout << "The value is: %=" << value << endl;

    return 0;
}