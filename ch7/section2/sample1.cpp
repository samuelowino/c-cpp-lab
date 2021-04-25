//Section 2: Argument Passing
#include <iostream>

using namespace std;

int main(){
    /**
     * If an array is used a function argument,
     * a pointer to its initial element is passed.
     *
     **/
     int strlen(const char*);

     void f(){
         char v[] = "an array";
         int i = strlen(v);
         int j = strlen("Nicholas");
     }

     /**
      * An argument of type T[] will be converted to a T* when passed as an argument.
      * ==> Arrays differ from other types in that 
      * an array is not ( and cannot be) passed by value.
      *
      **/
    
    /**
     * The size of the array is not available to the called function.
     *
     **/
}

