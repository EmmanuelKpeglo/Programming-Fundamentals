#include <iostream>
using namespace std;

int main () {
    
    /*int inputCounter = 0;
    int inputNumber;
    int arraySize = 5;
    int numbers[arraySize];
    int totalOfNumbers = 0;

    while(inputCounter < arraySize) {
        
        cout<<"Enter number >> \t";
        cin>>inputNumber;
        numbers[inputCounter] = inputNumber;
        totalofNumbers = totalofNumbers + numbers[inputCounter];
        inputCounter++;
    }*/



    //mode
    int totalNumbers = 10;
    int numbers [totalNumbers] = {3, 1, 3, 5, 5, 1, 1, 4, 1, 3};

    int currentPosition = 0;
    
    int frequency = 1;
    int mostFrequent = 1;
    int mode;
  
    while(currentPosition < totalNumbers) {

        int innerCounter = 0;
        while(innerCounter < totalNumbers){
            
            if(numbers[currentPosition] == numbers[innerCounter + 1]) {
                
		        frequency = frequency + 1;
            
            }

            innerCounter++;

        }

    	if(frequency > mostFrequent) {
		
	    	mostFrequent = frequency;
		    mode = numbers[currentPosition];

	    }
        
        frequency = 1;

        currentPosition++;

    }

    cout<<"The mode is: "<<mode<<endl;

    int num = 9;

    int &k = num;
        k = 10;

    cout<<k<<endl;
    cout<<num<<endl; 
    

    return 0;


//end of main function
}
