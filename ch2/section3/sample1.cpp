//Strings Basics
#include <iostream>
#include <string>

using namespace std;

string s1 = "Hello";
string s2 = "world";

int main(){
    m1();
    m2();
    m3();
}

//String concatenation
void m1(){
    string s3 = s1 + " , " + s2 + "!" + "\n";
    cout << s3;
}

//string comparison
void m2(const string& password){
    string systemPassword = "rainbowcolor2s"
    if(password == systemPassword){
        cout<< "Login in successful" << endl;
    }else if(password == ""){
        cout << "Please enter password" << endl;
    }else {
        cout "Invalid credentials, reset password" << endl;
    }
}

//substring() and replace() operations on strings
void m3(){
    string name = "Niels Stroustroup";
    string s = name.substring(6,10);
    
    cout << "substr " << s << endl;

    name.replace(0,5,"Nicholas");
}
