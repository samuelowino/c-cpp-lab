//Section 2: Namespaces: Avoiding Name Clashes
/**
 * Namespaces are intended to express logical structure.
 *
 **/

//=============
// | my.h     |
//=============
    char f(char);
    int f(int);
    class String { /* ... */};

//===============
// | your.h     |
//===============
    char f(char);
    double f(double);
    class String {/* ... */};

/**
 * Given these definitions, a third party cannot easily use both
 *      my.h and your.h
 *The obvious solution is to wrap each set of declarations in its own namespaces.
 *
 **/
namespace My {
    char f(char);
    int f(int);
    class String {/* ... */};
}

namespace Your {
    char f(char);
    double f(double);
    class String {/* ... */};
}

//Now we can use declarations from My and Your through explicit qualification.
My::f('c');
Your::f('c');
