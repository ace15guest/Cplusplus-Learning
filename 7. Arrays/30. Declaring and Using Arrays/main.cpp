#include <iostream>

using namespace std;

int main(){
    int scores [10];
    for (size_t val {}; val < 9; val++){
    scores[val] = val*3;
    cout << scores[val] << endl;

    }

    return 0;
}