//Chapter 4: Types and Declarations, typedef
#include <iostream>

using namespace std;

int main(){
    /**
     * A declaration prefixed by the keyword #typedef declares a new name for the type 
     * rather than a new variable of the given type
     *
     **/

     typedef char* Pchar;
     Pchar p1; //p1 is a char*
     typedef int int32;
     typedef short int16;
     typedef long int32;

}
