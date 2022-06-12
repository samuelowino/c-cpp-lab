//Section 9: Algorithms: Sample one sample of basic algos
#include <iostream>
#include <vector>
#include <list>

using namespace std;

struct Contact {
    string name;
    int phone;
}

/**
 * The standard library provides the most common algorithms for containers
 * in additions to providing the most common container types. (Refer to section 8#sample1.cpp)
 *
 **/
int main(){

}

/**
 * Sort a vector and place a copy of each unique vector element in a list
 * This will completely overwrite the list incase it contained any elements.
 * This std::sort() sorts the vector sequence 
 *      from #vector_elements.begin()  
 *      to #vector_elements.end()
 **/
void sort_and_copy_overwrite(vector<Contact>& vector_elements, list<Contact>& list_elements){
    sort(vector_elements.begin(), vector_elements.end());
    unique_copy(vector_element(), vector_elements.end(), list_elements.begin());
}

/**
 * If we wanted to add the new elements to the end of the the list container
 * instead of a complete overwrite...
 *
 * #list_elements.begin() is replaced with #back_inserter(list).
 * #back_inserter(list) adds elements at the end of a container, 
 * extending the container to make room for them.
 *
 * Using a standard container and #back_inserter(container) eliminates the need to use
 * error-prone, explicit C-style memory management using #realloc().
 *
 * Forgeting to use #back_inserter() while appending can lead to runtime-logical errors.
 **/
void sort_and_copy_append(vector<Contact>& vector_elements, lsit<Contact&> list_elements){
    sort(vector_elements.begin(), vector_elements.end());
    //Append to list_elements
    unique_copy(vector_elements.begin(), vector_elements.end(),back_inserter(list_elements)); 
}

/** 
 * Forgeting to use #back_inserter() when appending can lead to errors.
 *
 **/
void copy_with_mistakes(vector<Contact>& vector_elements, list<Contact>& list_elements){
    // error: list_element not an iterator
    copy(vector_elements.begin(), vector_elements.end(), list_elements);
    // bad: writes beyond the end
    copy(vector_elements.begin(), vector_elements.end(), list_elements.end());
    //overwrite elements
    copy(vector_elements.begin(), vector_elements.end(), list_elements.begin());
}
