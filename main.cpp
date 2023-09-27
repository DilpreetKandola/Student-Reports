#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


#include "student.h"

int main();
int lineCount();



int main() {
    std::ifstream InFile;
    std::string line;
    std::string text;
    int index = -1;                                     
    int numOfLines = lineCount();

    
    InFile.open("students.dat");
    Student *students = new Student[numOfLines];    //however many students there are in the data file, it creates that many instances of student



    if(InFile.is_open()){
        while(!InFile.eof()){
            index += 1;
            std::getline(InFile, line);
            if(index != -1){                                                //this is the brain of the operation, it sets the student passing it the data 
                students[index].setStudent(line);
                students[index].getFullReport();                            //then calls the fulll report and short report method. 
                students[index].getShortReport();
            }// end if



        }//end while







    }// end if 
    InFile.close();
    delete[] students;          //closes the file and deletes the students.

}//end main



int lineCount(){
    std::ifstream InFile;                       //this function just counts how many lines there are in the data file provided. 
    int amountOfLines = 0;
    std::string tempLine;

    InFile.open("students.dat");

    while(std::getline(InFile, tempLine)){
        ++amountOfLines;
    }// end while

    InFile.close();
    return amountOfLines;
} // end line count function
