#include <iostream>
#include "stack.h"

namespace Stack {

    const int max_size = 200;

    struct Rep {
        char v[max_size];
        int top;
    };

    //max number of stacks
    const int max = 16;

    Rep stacks[max];
    bool used[max];
}

void Stack::push(stack s, char c){
    try{
        s.push(c);
    }catch(Stack::Overflow){
        cout<<"Exception error, Bad-Push Stack::Overflow"<<endl;
    }
}

char Stack::pop(stack s){
    try{
        return s.pop();
    }catch(Stack::Bad_pop){
        cout<<"Error bad pop"<<endl;
        return null;
    }
}

Stack::stack Stack::create(){
    return new Stack::stack();
}

void Stack::destroy(stack s){
    s.unused();
}
