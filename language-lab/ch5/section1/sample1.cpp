//Section 1: Pointers
#include <iostream>

using namespace std;

int main(){
    /**
     * For a type T, T* is the type "pointer T". 
     * That is, 
     * a variable of type T* can hold the #address of an object of type T
     *
     **/
    char c = 'a';
    char* p = &c;

    /**
     * Pointers to arrays and pointers to functions need a more complicated notation
     *
     **/
    int* pi;            //Pointer to int
    char** ap[15];      //array of 15 pointers to ints
    char** ppc;         //pointer to pointer to char
    int (*fp) (char* ); //pointer to function taking a char* argument; returns an int
    int* f(char*);      //function taking a char* argument; returns a pointer to int

    /**
     * The fundamental operation on a pointer is dereferencing,
     * that is,
     * referring to the object pointed to by the pointer.
     * This operation is also called indirection.
     * The dereferencing operator is(prefix) unary *.
     *
     **/
    char c = 'a';
    char* p = &c;       //p holds the address of c
    char value = *p;    //value == 'a' dereferencing | indirection operation

    /**
     * The variable pointed to by p is c,
     * and
     * the value stored in c is 'a'
     * so
     * the value of *p assigned to #value is 'a'
     *
     **/
}
