#include <iostream>

using namespace std;

int main(){
    bool red_light {true};
    bool green_light {false};

    if (red_light == true){
        cout << "STOP!" << endl;
    }
    else{
        cout << "GO!" << endl;
    }
    if(green_light){
        cout << "GOOOOOO"<< endl;
    }
    else{
        cout << "STOP NOOOO" << endl;
    }
    cout << green_light << endl; // 0

    cout << boolalpha;

    cout << green_light << endl; // False

    return 0;
}