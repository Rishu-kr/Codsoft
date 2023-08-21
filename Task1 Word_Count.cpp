//Intern Name-Rishabh Kumar # Codsoft #word counter 
//import all the libraries 
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
//This is the code for the the task 1 word count in C++ of Codsoft Internship.
using namespace std;
//to count words
int countWords(const string& filename) {
    ifstream file(filename);
    if (!file) {
        //if error during file opening.
        cout << "Error in opening file: " << filename << endl;
        return -1;
    }
    string acctext;
    int wordCount = 0; //initiate a counter to count the word .
    while(getline(file, acctext)) {
        string word;
        istringstream inputword(acctext);
        while (inputword >> word) {
            wordCount++; // increment the counter
        }
    }

    return wordCount; 
    //finally return the value of word count
}

int main() {
    string filename;
    cout << "Enter Name of the File: ";
    getline(cin, filename); //fetch the file

    cout<<endl;
    int allWords = countWords(filename); //call the function word count
    //to count all words in file
    if (allWords != -1) {
        cout << "Total number of words in the file: " << allWords << endl;
        cout<<endl;
    }

    return 0;
}
