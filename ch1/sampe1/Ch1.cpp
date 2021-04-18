#include <iostream>
#include "stack.h"

//Function utilising the Stack namespace
void f(){
    Stack::push('c');
    if(Stack::pop() != 'c') error("impossible");
}
