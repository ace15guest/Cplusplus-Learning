#include <iostream>

using namespace std;

int main(){
    char c_arr[5] {'H', 'e', 'l', 'l', '\0'}; //need null terminator to print array of charac
    char c_arr2[4] {'H', 'k', 'l', 'l'};
    char c_arr3 [] {'h', 'e', 'y', '\0'};
    char c_arr4 [] {"Hello"};
    for (auto el : c_arr){
        cout << el;

    }
    cout<<endl;

    cout << "Message: " << c_arr << endl;
    cout << "Message: " << c_arr2 << endl;
    cout << "Message: " << c_arr3 << endl;
    cout << "Message: " << c_arr4 << endl;


}