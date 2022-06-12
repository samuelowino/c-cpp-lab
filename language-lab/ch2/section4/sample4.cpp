//Text Input, with support for spaces with #std::getline()
#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;

    cout << "Please enter your favorite quote\n" << endl;
    getline(cin,str);
    cout << "Nice one, you entered\n" << str << endl;

}
