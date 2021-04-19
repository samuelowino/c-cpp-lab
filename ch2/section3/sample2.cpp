//Strings STL : C-style string
#include <iostream>
#include <string>

using namespace std;

int main(){
    string name = "Music Streaming Business :-(";
    string platform = "Spotify";
    printf("name: %s sucks man... I have 2 streams on %s", name.c_str(), platform.c_str());
}
