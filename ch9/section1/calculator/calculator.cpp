#include <iostream>
#include "parser/parser.h"

using namespace std;
using namespace Parser;

int main(){
    cout << prim(false) << endl;        //utilise definitions in parser.cpp
    cout << expr(false) << endl;
    cout << term(false) << endl;
}
