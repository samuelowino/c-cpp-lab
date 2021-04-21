//Chapter 4: Types and Declarations, characters
#include <iostream>

using namespace std;

int main(){
    while(true){
        char c;
        cout << "Enter character to see matching integer value" << endl;
        
        cin >> c;

        cout << "The value of " << c << " is " << int(c) << "\n" << endl;

        cout << "=================================================================" << endl;
        cout << "=================================================================" << endl;
    }
}
