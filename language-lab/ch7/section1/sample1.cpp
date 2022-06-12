//Section 1: Function Declarations
#include <iostream>

using namespace std;

int main(){
    /**
     * The typical way of getting something done 
     * in a C++ program is to call a function to do it.
     * A function cannot be called unless it has been previously declared
     *
     **/
    Elem* next_elem();
    char* strcpy(char* to, const char* from);
    void exit(int);

    /** 
     * A function may contain argument names. 
     * This can help the reader of a program, but
     * the compiler simply ignores such names.
     *
     **/

    /**
     * A function definition is a function declaration
     * in which the body of the function is presented
     *
     **/
    extern void swap(int* , int);       //a declaration

    void swap(int* p, int* q){          //the definition
        int t = *p;
        *p = *q;
        *q = t;
    }
    
}
