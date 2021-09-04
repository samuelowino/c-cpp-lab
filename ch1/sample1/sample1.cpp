#include <iostream>
#include "namespace/stack.h"

//Function utilising the Stack namespace
void f(){
    try{
        while(true){
             Stack::push('c');
            if(Stack::pop() != 'c') error("impossible");
        }
    }catch(Stack::StackOverflow){
        cout<<"Exception occured : Stack::Overflow"<<endl;
    }
}
