#include <iostream>

using namespace std;

int main(){
    bool red_light {true};
    bool green_light {0};
    bool yellow_light {false};

    if (green_light){
        cout << "GO!" << endl;
    }
    else if (yellow_light){
        cout << "SLOW!" << endl;
    }
    else if (red_light){
        cout << "STOP!" << endl;
    }
    

    return 0;
}