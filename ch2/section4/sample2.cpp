//Input: Detailed example; inches to centimeters converter
#include <iostream>

using namespace std;

int main(){
    const float factor = 2.54; // 1 inch equals 2.54cm
    float input;
    float inches;
    float centimeters;
    char units = 0;

    cout << "enter wood length:";
    cin >> input;
    
    cout << "enter your preferece units ('c' for centimerters or 'i' for inches) ?";
    cin >> units;

    switch(units){
        case 'i';
            cout << "Rolling with the inches \n";
            cm = input * factor;
            inches = input;
            break;
        case 'c':
            inches = input / factor;
            centimerters = input;
            break;
        default:
            inches = 0;
            centimerters = 0;
            break;
    }

    cout << inches << " inches = " << centimerters << " centimers " << "\n";

}
