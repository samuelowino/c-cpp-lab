//Map Container; Key-Value pairs
#include <iostream>
#include <map>
#include <string>

using namespace std;

/**
 * A map is a container of key-value pairs.
 * In other contexts, a map is known as 
 * an associative array or a dictionary.
 *
 * When indexed by a value of its type (called the #key)
 * a map returns the corresponding value of the second type
 * (called the value or the mapped type).
 *
 **/
map<string,int> phone_book;

int main(){

}

/**
 * If no match is found for the key, a default value is returned.
 * The default value for an integer type in a map is o.
 *
 **/
void print_entry(const string& key){
    int number = phone_book[key];
    cout << "Contact Name: "<< key << "Phone: " << number << '\n';
}
