//Section 3: Default Arguments
#include <iostream>

using namespace std;

int main(){
    /**
     * A general function often needs more arguments than are necessary to handle siple cases
     * 
     **/
    void print(int value, int base = 10);       //default base is 10

    void f(){
        print(31);      //base is optional, if not passed, base = 10 is used
        print(31, 10);
        print(21, 16);
        print(31, 3);

        // << 31 31 1f 11111

        /**
         * Default arguments may be provided for trailing arguments only
         *
         **/
        int f(int, int = 0, char* = 0);     //ok
        int g(int = 0, int = 0, char*);     //error
        int h(int = 0, int, char* = 0);     //error
    }
}
