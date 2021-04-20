//Section 9: Algorithms: Iterators
#include <iostream>
#include <string>

using namespace std;

int main(){

}

/**
 *====================
 *| Use of Iterators |
 *====================
 *
 * When you first encounter a standard container, 
 * a few iterators referring to useful elements can be obtained
 * #begin() and #end() are the best examples.
 * 
 * In addition many standard algorithms return iterators.
 * For example; 
 * the alogorthm #find() looks for a value in a sequence and 
 * returns an iterator to the element found. 
 *
 * Using #find(), we can write a function that 
 *      counts the number of occurrences of a character in a string
 *
 * The #find algorithm returns an iterator to the ==first occurrence== of a value in a sequence
 *      or past-the-end iterator.
 **/
int count(const string& sentence, char search_char){
    string::const_iterator iterator = find(sentence.begin(), sentence.end(), search_char);
    int char_occurences = 0;
    
    while(iterator != sentence.end()){
        ++n;
        iterator = find(iterator + 1, sentence.end(), search_char);
    }
    return char_occurences;
}

/**
 * Consider the usage of the #count() method
 *
 **/
 void f(){
     string verse = "Mary had a little lamb";
     int a_count = count(verse,'a');
     cout << "a count in " << verse << " is "<< a_count <<endl; 
 }

 /**
  * The #std::find() algorithm will work equivalently in every standard container. 
  * Consequently, we could generalize the #count() function in the same way.
  *
  **/
template<class C, class T> int count_generic(const C& container, T search_value){
    typename C::const_iterator iterator = find(container.begin(), container.end(), search_value);
    int occurrences = 0;

    while(iterator != container.end()){
        ++ occurrences;
        ++ iterator;
        iterator = find(iterator, container.end(), search_value);
    }

    return occurrences; 
}

/**
 * Usage of generic #count() and #find()
 *
 **/
void f_general(list<complex>& list_container, vector<string>& vector_container, string sentence){
    int list_count = count_generic(list_container, complex(1,3));
    int vector_count = count_generic(vector_container, "kidDanger");
    int string_count = count_generic(sentence, 'D');
}


/**
 * However, we don't need to define a #std::count template.
 * The standard library already provides that algorithm.
 * 
 * To be fully general, the standard library #std::count
 *      takes a sequence as its argument, rather than a container.
 *
 **/
void f_std(list<complex>& list_container, vector<string>& vector_container, string sentence){
    int list_find_count = std::count(list_container.begin(), list_container.end(), complex(1,3));
    int vector_find_count = std::count(vector_container.begin(), vector_container.end(), "Mineapolis");
    int string_find_count = std::count(sentence.begin(), sentence.end(), 'i');
}

/**
 *===============================
 *| IMPORTANT NOTE ON ITERATORS |
 *===============================
 * What is common about iterators is their semantics and the naming of their operations. 
 * For example, 
 *          applying ++ to any iteration yields an iterator that refers to the next element.
 * 
 * Similarly, * yields the element to which the iterator refers.
 *
 * Each container "knows" it's iterator and makes them available under the conventional names
 * #iterator and #const_iterator. For example;
 *          list<Entry>::iterator or 
 *          list<Entry>::const_iterator
 **/
