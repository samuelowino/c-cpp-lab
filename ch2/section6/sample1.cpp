//List Containers
#include <iostream>
#include <list>

using namespace std;

struct Entry {
    string name;
    int number;
}

/**
 * When we use a list, 
 * we tend not to access elements using subscripting 
 * the way we commonly do for vectors.
 * Instead, we might search the list looking for an element with a given value.
 *
**/
list<Entry> phone_book;

int main(){

}

/**
 * We take advantage of the fact that a list is a sequence
 *
 **/
 void print_entry(const string& search){
     typedef list<Entry>::const_iterator list_iterator;
     
     /**
      * The search for 'search' starts at the begining of the list and proceeds
      * until either 'search' is found 
      * or the end is reached.
      * 
      * Every standard library container provides the function #begin() and #end(),
      * which return an iterator to the first and to one-past-the-last element, repectively.
      *     Given an iterator i, the next element is ++i.
      *     Given an iterator i, the element it refers to i *i
      *
      **/
     for(list_iterator iterator = phone_book.begin(); iterator != phone_book.end(); ++iterator){
         Entry& element = *iterator; //reference used as short hand to iterator's element
         if(search == element.name)
            cout << element.name << ' ' << element.number << '\n';
     }
 }

 /**
 * Adding elements to #list container is as below
 *
 **/
 void add_entry(Entry& element, list<Entry>::iterator iterator){
     phone_book.push_front(element);        //add at beginning
     phone_book.push_back(element);         //add at end
     phone_book.insert(iterator, element);  //add before the element 'iterator' refers to
 }

