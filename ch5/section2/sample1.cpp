//Section 2: Arrays
#include <iostream>

using namespace std;

int main(){
    /**
     * For a type T, T[size] is the type "array of size elements of type T."
     * The elements are indexed from 0 to size -1.
     *
     **/
    float v[32];    //an array of three floats: v[0], v[1], v[2]
    char* a[32];    //an array of 32 pointers to char: a[0] ...a[31]

    /**
     * The number of elements of the array,
     * the array bound, must be a constant expression.
     * If you need variable bounds, use vector or other standard containers.
     *
     **/

     /**
      * Multidomensional arrays are represented as arrays of arrays
      *
      **/
    int d2[10] [20];    // d2 is an array of 10 arrays of 20 integers
     
}
