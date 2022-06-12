//Concrete types
//User defined Stack type declaration
class Stack {
    char* v; //pointer to stack memory
    int top;
    int max_size;

    public:
        class UnderflowException{};
        class OverflowException{};
        class BadSizeException{};

        Stack(int s);
        ~Stack();

        void push(char c);
        char pop();
};

//Constructor, Destructor implementation
Stack::Stack(int stack){
    top = 0;
    if(1000<stack) throw BadSizeException();
    max_size = stack;
    v = new char[stack];
}

Stack::~Stack(){
    delete[] v;
}

//Push and Pop Implementation
void Stack::push(char c){
    if(top == max_size) throw OverflowException();
    v[top] = c;
    top = top + 1;
}

char Stack::pop(){
    if(top == 0) throw UnderflowException();
    top = top - 1;
    return v[top];
}

//Stack Concrete type use in user code
Stack s_var1(10); //create global stack of 10 elements

void f(Stack& s_ref,int stackSize){
    Stack s_var2(stackSize); //local stack with i elements
    Stack* s_prt = new Stack(20); //pointer to stack allocated on free store

    s_var1.push('a');
    s_var2.push('b');
    s_ref.push('c');
    s_prt->push('d');
}


