//Section 9: Algorithms : Traversals and Predicates
#include <iostream>
#include <pair>
#include <map>
#include <string>

using namespace std;

/**
 * The standard library provides ways for a function to be called for each element of a sequence
 *
 * Consider the following program that:
 *  ==> reads the words from input and records the frequency of their occurrence.
 *
 **/

map<string, int> histogram; //key == word, value == frequency ; associative array representation

int main(){
    istream_iterator<string> ii(cin);
    istream_iterator<string> eos;

    for_each(ii, eos, record); //Record each word and frequency from istream

    for_each(histogram.begin(). histogram.end(), print); // print each #pair in the histogram #map
}

/**
 * Records the frequency of each word
 *
 **/
void record(const string& word){
    histogram[word] ++; //record frequency of "word"
}

/**
 * The #map consists of a sequence of (string, int) #pairs
 * prints the pair
 *
 **/
void print(const pair<const string, int>& r){
    cout << r.first << ' ' << r.second << '\n';
}

/**
 * Search the #map for first value larger than 42. 
 * We search the map for a pair<const string, int> where int is greater then 42
 *
 **/
bool gt_42(const pair<const string, int>& r){
    return r.second > 42;
}

void f(map<string, int>& m){
    typedef map<string, int>::const_iterator MI;
    MI iteration = find_if(m.begin(), m.end(), gt_42());
    // ...
}

void g(const map<string, int>& m){
    int c42 = count_if(m.begin(), m.end(), gt_42);
}

/**
 * A function such as #gt_42(), that is used to control the algorithm is called a predicate.
 * A predicate is called for each element and returns a Boolean value,
 * which the algorithm uses to perform its inteded action.
 *
 * For example;
 *      std::find_if() searches unti its predicate returns #true 
 *      to indicate that an element of interest has been found.
 *
 * Similarly, 
 *      std::count_if() counts the number of times its predicate is true
 *
 **/
