#include <iostream>
#include <cstring>

using namespace std;

int main () {

    string word;

    cout<<"Enter a word: "<<endl;

    getline(cin, word);

    cout<<"The word you typed is :"<<word<<endl;

    char wordArray[word.length() + 1];

    strcpy(wordArray, word.c_str());

    const char *wordArrayPointer {wordArray};
    cout<<wordArrayPointer<<endl;

    for(int i = 0; i < word.length() + 1; i++) {

       cout<<*(wordArrayPointer+i)<<endl;

    }



    //end of main function
    return 0;

}
