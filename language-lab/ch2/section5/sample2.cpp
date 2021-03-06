//C++ Containers : C-style Vector, Phone Book Example
#include <iostream>
#include <vector>

using namespace std;

//custom entry definition
struct Entry {
    string name;
    int phone_number;
};

vector<Entry> phone_book(1000);

int main(){
    for(int i = 0; i < phone_book.size; i++){
        print_entry(i);
    }
}

void print_entry(int index){
    cout << phone_book[i].name << '' << phone_book[i].number << '\n';
}

void add_entries(int n){
    phone_book.resize(phone_book.size() + n);
}

void f(vector<Entry>& v){
    vector<Entry> v2 = phone_book;
    v = v2; 
    /** 
     * After initialization and assignment,
     * v and v2 each hold a seperate copy of every entity 
     * in phone book
     *
    **/
}
