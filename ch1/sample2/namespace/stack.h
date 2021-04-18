//This is a stack manager. Manages multiple stacks
namespace Stack {
    struct Rep;
    typedef Rep& stack;

    class Overflow{};

    //make a new stack
    stack create();
    //delete stack
    void destroy(stack s);

    //push char c onto stack s
    void push(stack s, char c);
    //pop from stack s
    char pop(stack s);
}
