#include <iostream>

using namespace std;

int main(){
    int a {6};
    int b {4};
    int c {5};
    int d {1};
    int e {2};
    int f {3};
    
    int res = a+b*c-d/e-f+a; //6+20-0-3+6
    cout << res << endl;
    int res2 = d/e;
    cout << res2 << endl; //0

    return 0;
}