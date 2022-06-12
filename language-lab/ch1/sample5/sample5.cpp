//Abstract types
class Stack {
    public:
        class Underflow {};
        class Overflow {};

        //Declare virtual functions
        virtual void push(char c) = 0;
        virtual void pop() = 0;
}

//Stack class usage
void f(Stack& s_ref){
    s_ref.push('c');
    if(s_ref.pop() != 'c') throw bad_stack();
}

//Stack class implementation as Array_stack where Array_stack 'implements' Stack
class Array_stack : public Stack {
    char* p;
    int max_size;
    int top;

    public:
        Array_stack(int size);
        ~Array_stack();

        void push(char c);
        char pop();
};

//Some other function g() makes an object on which function f() can operate
void g(){
    Array_stack arrayStack(200);
    f(arrayStack);
}

//Another Stack implementation as List_stack
class List_stack : public Stack {
    list<char> listChars;
    public:
    List_stack(){};

    void push(char c) {
        listChars.push_front(c);
        char pop();
    };

    char List_stack::pop(){
        char x = listChars.front();
        listChars.pop_front();
        return x;
    }
}

//Function utlising List_chars instance by calling function f(stack& s)
void h{
    List_stack listStack();
    f(listStack);
}
