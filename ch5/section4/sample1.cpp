//Section 4: Constants
#include <iostream>

using namespace std;

int main(){
    /**
     * C++ offers the concepts of a user-defined constant,
     * a #const,
     * to express the notion that a value doesn't change directly.
     *
     **/
    const int model = 90;           //model is a const
    const int v[] = { 1, 2, 3, 4 }; //v[i] is const
    const int x;                    //error: no initializer
}
