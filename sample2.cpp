//Classes SmallObj Example
#include <iostream>

using namespace std;

class small_obj {
    private:
        int some_data;
    public:
        void set_data(int data){
            this.some_data = data;
        }

        void show_data(){
            cout << "Data is " << some_data << endl;
        }
};

int main(){
    small_obj s1;
    small_obj s2;

    s1.set_data(1066);
    s2.set_data(1776);

    s1.show_data();
    s2.show_data();

    return 0;
}
