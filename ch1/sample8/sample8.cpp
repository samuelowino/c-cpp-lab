//Generic Programming with Templates
template<class T> class Stack {
    T* v;
    int max_size;
    int top;

    public:
        class UnderflowError{};
        class OverflowError{};

        Stack(int size);
        ~Stack();

        void push(T);
        T pop();

};

//Member function definition
template<class T> void Stack<T>::push(T c){
    if(top == max_size) throw OverflowError();
    v[top] = c;
    top = top + 1;
}

template<class T> T Stack<T>::pop(){
    if(top == 0) throw UnderflowError();
    top = top - 1;
    return v[top];
}

//Given the above definitions, we can use stack like this:
Stack<char> stackChar;
Stack<complex> stackComplex;
Stack<list<int>> stackIntList;

void f(){
    stackChar.push('c');
    if(stackChar.pop() != 'c') throw Bad_pop();

    stackComplex.push(complex(1,2));
    if(stackComplex.pop() != complex(1,2)) throw Bad_pop();
}
