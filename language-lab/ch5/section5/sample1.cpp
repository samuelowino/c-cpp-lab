//Section 5: Structures
#include <iostream>

using namespace std;

int main(){
    /**
     * A struct is an aggregate of elements of (nearly) abitrary types.
     *
     **/
    struct address {
        char* name;
        typedef long int = Long;
        Long number;
        char* street;
        char* town;
        char state[2];
        long zip;
    };

    //Individual mebers can be access using the . (dot) operator.
    address jd;
    jd.name = "Jack and Jill Street"
    jd.number = 12000;
    //...

    //The notation used to initialize arrays 
    //can be used for initializing variable of structure types.
    address pj = {
        "PJ Studios",
        2100,
        "South street",
        "PJ Masks",
        {'M', 'K'},
        7654
    };
}

//Structures are often accessed through pointers using the  -> 
//==> structure pointer deference operator.
void print_address(address* p){
    cout    << p -> name << '\n'
            << p -> number << ' ' << p -> street << '\n'
            << p -> town << '\n'
            << p -> state[0] << p -> state[1] << ' ' << p -> zip << '\n';

    //when p is a pointer, p -> m is equivalent to (*p).m
}

/**
 * Objects of structure types can be assigned, 
 * passed as function arguments, and 
 * returned as the result from a function.
 *
 **/
address current;

address set_current_address(address next_address){
    //operations on next_address ...
    return next_address;
}
