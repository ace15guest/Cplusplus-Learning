#include <iostream>

using namespace std;

int main(){
    int scores[] {1,2,3,4,5,56,4,6,4,3,3}; //Only works with c++17 and newer so do not use
    cout << size(scores) << endl;
    cout << sizeof(scores)/sizeof(scores[0]) <<endl;
    for (auto score:scores){
        cout << score << endl;
    }
    return 0;
}