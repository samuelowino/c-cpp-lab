#include <iostream>
#include <string>

using namespace std;

int main(){
    f();
    g();
    h(1995);
    k();
}

//Output number
void f(){
    cout<<10;
}

//Output variable
void g(){
    int i = 10;
    cout<<i;
}

//Output variable combined with text
void h(int year){
    cout<<"the year is " << year <<endl;
}

//Output chars
void k(){
    cout<< 'a' << 'b' << 'c';
}
