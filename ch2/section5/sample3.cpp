//Range Checking in vectors, through use of a custom vector adapter Vec
#include <iostream>
#include <vector>

using namespace std;

//custom entry definition
struct Entry {
    string name;
    int phone_number;
};

int main(){
    f();
    print_entries();
}

/**
 * The standard library vector does not provide range checking by default.
 * The below function would throw an out of range error
 **/

 void f(){
     vector<Entry> phone_book(1000); //vector of 1000 elements
     int thousand_and_oneth_number = phone_book[1001].number; //1001 is out of range, Error
 }

/** 
 * Definition of a vector adapter Vec
 * A Vec is like a Vector except 
 * it throws an exception out_of_range 
 * is subscript is out of range
 *
 **/
template<class T> class Vec : public vector<T> {
    public:
        Vec() : vector<T> () {}
        Vec(int size) : vector<T>(size) {}

        T& operator[](int index){
            /**
             * #vector.at() is a vector subscript operation 
             * that throws an exception of type out_of_range 
             * if it's argument is out of the vector's range
             *
             **/
            return at(index);
        }

        const T& operator[](int index) const {
            /**
             * #vector.at() is a vector subscript operation 
             * that throws an exception of type out_of_range 
             * if it's argument is out of the vector's range
             *
             **/
            return at(index);
        }
}

/**
* Returning to the problem of keeping names and phone_numbers,
* We can now use a Vec (vector adapter) 
* to ensure that out_of_range accesses are caught.
* #cerr prints the error in the standard diagnostics output stream cerr 
* 
**/
void print_entries(){
    try{

        Vec<Entry> phone_book(1_000); //Vector declaration and init with Vec adapter 

        for(int i = 0; i < 100_000; i++){
            cout << phone_book[i].name << ' ' << phone_book[i].number << '\n';
        }
    }catch(out_of_range){
        cerr <<"Out of range error, phone book missing some contacts, expected 100_000" << endl;
    }
}
