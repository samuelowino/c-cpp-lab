//Section 9: Algorithms; Using Member Functions
#include <iostream>
#include <shape>

using namespace std;
/**
 * Often, we deal with containers of pointers and we really would like to 
 * call a member function of the object pointed to, rather than a global function
 * on the pointer.
 *
 * For example;
 *      We might want to call the member function 
 *      Shape::draw() for each element of a list<Shape*>.
 * To achieve this, we simply write a nonmember function that invokes the member function.
 *
 **/
void draw(Shape* shape){
    shape -> draw();
}

void f(list<Shape*>& shapes){
    for_each(shapes.begin(), shapes.end(), draw);
}

/**
 * By generalizing this technique, we can write the above as
 *
 **/
void g(list<Shape*>& shapes){
    for_each(shapes.begin(), shapes.end(), std::mem_fun(&Shape::draw));
    /**
     * The stadard library std::mem_fun() template takes a pointer to a member function
     * as its arguments 
     * and produces something that can be called for a pointer to the member's class 
     *
     * The result of mem_fun(&Shape::draw) takes a Shape* argument and returns whatever
     *      Shape::draw() 
     * returns
     *
     **/
}

int main(){
    //...
}


