//C++ Containers : Vectors, Phone Book Example
#include <iostream>

using namespace std;

int main(){
    //custom entry definition
    struct Entry {
        string name;
        int phone_number;
    };

    //Array of entries resembling a vector
    Entry phone_book[1000];

    void print_entry(int i){
        cout << phone_book[i].name << '' << phone_book[i].number << '\n';
    }
}
