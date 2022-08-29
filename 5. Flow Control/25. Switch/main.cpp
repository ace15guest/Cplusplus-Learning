#include <iostream>

using namespace std;

int main(){
    const int red_light {0};
    const int green_light {1};
    const int yellow_light {2};

    int color {red_light};

    switch (color)
    {
        case red_light:{
            cout << "STOP!" << endl;
        }
        break;
        
        case green_light: {
            cout << "GO!" << endl;
        }
        break;
        case yellow_light: {
            cout << "SLOW!" << endl;
        }
        break;
    
    default:
        break;
    }

    return 0;
}