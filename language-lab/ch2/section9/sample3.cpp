//Section 9: Algortithms: Iterators and I/O streams
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * We can write a simple program to 
 * read a file, sort the words read, eliminate duplicates, 
 * and write the result to another file:
 *
 * An ifstream is an istream that can be attached to a file, and 
 * an ofstream is an ostream that can be attached to a file.
 **/
int main(){
    string from; //source file name
    string to; //output file name

    //get source and target file names
    cout << "Enter source file name..." << endl;
    getline(cin, from);
    cout << "Enter destination file name..." << endl;
    getline(cin, to);

    //file innput stream
    ifstream file_input_stream(from.c_str());
    //input iterator stream
    istream_iterator<string> input_stream_iterator(file_input_stream);

    //input sentienal
    istream_iterator<string> eos;

    //initialize vector from input
    vector<string> input_stream_vector(input_stream_iterator, eos);

    //sort the "incoming" buffer
    sort(input_stream_vector.begin(), input_stream_vector.begin());

    //output stream
    ofstream file_output_stream(to.c_str());
    //output iterator for output stream
    //'\n' argument here is used to delimite output values with a new line
    ostream_iterator<string> output_stream_iterator(file_output_stream, "\n");

    //copy buffer (input stream vector) to output stream
    unique_copy(input_stream_vector.begin(), input_stream_vector.end(), output_stream_iterator);

    //return error state
    return !file_input_stream.eof() && !file_output_stream;

}
