/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int getNumber(){
    int number;
    std::cout << "Please Enter a Number: ";
    std::cin >> number;
    return number;
}


void evenEval(int number){
    // 1 to 20, number * i
    int i = 1;
    int multiple = 0;
    while(i <= 20){
        // print i * number
        multiple = number * i;
        std::cout <<i<<" x "<<number<<" = "<< multiple << "\n";
        i++;
    }
    
}

void oddEval(int number){
    // for loop to 30 - check divisible by number
    int i = 1;
    int count = 0;
    std::cout << "First 30 Integers" << "\n" ;
    while(count <= 30){
        if(i % number > 0){
            
            std::cout << i << "\n";
            count++;
        }
        i++;
    }
}


int main()

{   

    int number;
    number = getNumber();
    if(number % 2 == 0){
        evenEval(number);
    }
    else{
        oddEval(number);
    }

