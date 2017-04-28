/* Final Exam Question #4
Pick any of the homework programming problems from week 8 or week 9 to satisfy this question
This is Week 8 - Question 1:
Write a program that reads records from file_a and writes out to file_b. This program should also keep a count of number of records read and written, and also accomplish exception handling.

 */

// standard exceptions
#include <iostream>
#include <exception>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    string line;
    int num_lines = 0;
    
    try
    {
        // Open/read file (with absolute path) Doesn't work any other way.
        ifstream reader("/Users/jendegruchy/Documents/C_Programming/FinalExam_Question4/FinalExam_Question4/file_a.txt");
        ofstream writer("/Users/jendegruchy/Documents/C_Programming/FinalExam_Question4/FinalExam_Question4/file_b.txt");
        
        while(reader.eof())
        /*while(!reader.eof()) I commented this out because it was preventing the data from writing to the file */
        {
            getline(reader, line);
            num_lines++;
        }
        
        cout << num_lines << endl;
        
        if (!reader) //This is needed so that the user knows if they've sourced in the files
            // It doesn't work with the counter, unfortunately.
        {
            throw "Error, Check your source. Files can't be found!";
            return -1;
        }
        
        else
        {
            writer << reader.rdbuf();
        }
        
        // Close Reader + Writer
        reader.close();
        writer.close();
    }
    
    catch(char* strg)
    {
        cout<<"Exception raised: "<<strg<<endl;
    }
    
    return 0;
}