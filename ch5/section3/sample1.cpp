//Section 3: Pointers into Arrays
#include <iostream>

using namespace std;

int main(){
    /**
     * In C++, pointers and arrays are closely related.
     * The name of an array can be used as a pointer to its initial element.
     *
     **/
    int v[] = { 1, 2, 3, 4};
    int* p1 = v;                //implicit pointer to initial element
    int* p2 = &v[0];            //pointer to initial element
    int* p3 = &v[4];            //pointer to one beyond last element
}
