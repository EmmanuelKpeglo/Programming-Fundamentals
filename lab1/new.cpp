#include <iostream>
using namespace std;

int main () {

    int num1, num2, num3, num4, num5, total, mean;

    cout<<"Enter number: \t";
    cin>>num1; cin>>num2; cin>>num3; cin>>num4; cin>>num5;

    //mean
    total = num1 + num2 + num3 + num4 + num5;
    mean = total/5;

    cout<<"The mean of all the numbers is: "<<mean;

    //median
    cout<<"The median of all the numbes is: \t";
    cout<<num3;
        

    return 0;
}
