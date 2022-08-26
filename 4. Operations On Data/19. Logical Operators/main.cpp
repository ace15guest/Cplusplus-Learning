#include <iostream>

using namespace std;

int main(){
    bool a {true};
    bool b {false};
    bool c {true};
    bool d {false};

    cout << boolalpha;

    cout << "T and F: " <<(a && b) << endl;
    cout << "T and T: " <<(a && c) << endl;
    cout << "F and F: " <<(d && b) << endl;

    cout << "T or F: " <<(a || b) << endl;
    cout << "T or T: " <<(a || c) << endl;
    cout << "F or F: " <<(d || b) << endl;

    cout << "Not T : " <<(!a) << endl;
    cout << "Not F: "  <<(!b) << endl;
    cout << "Not (F and F): " <<!(d && b) << endl;
    

    return 0;
}