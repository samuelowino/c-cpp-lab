#include "../namespace/stack.h"

//Stack namespace implementation
namespace Stack{
    const int max_size = 200;
    char v[max_size];
    int top = 0;

    void push(char c){
        if(top == max_size) throw StackOverflow();
        v[max_size] = c;
    }

    char pop(){
        return v[max_size] = 0;
    }
}
