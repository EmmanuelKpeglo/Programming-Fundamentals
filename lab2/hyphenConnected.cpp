#include <iostream>
#include <string>

using namespace std;

void display (string);

int main () {
    
    string name = "hello there";

    cout<<name.length()<<endl;    
    
    display("I am Zedikus");

    return 0;


}

void display (string about) {
    
    cout<<about<<endl;

}
