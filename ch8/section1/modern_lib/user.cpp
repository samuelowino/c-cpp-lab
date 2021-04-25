#include "A.h"
#include "B.h"

using namespace A;
using namespace B;

void g(){
    f('a'); //calls the f() from B.h
}
