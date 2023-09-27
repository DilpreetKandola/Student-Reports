#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

#include "student.h"


Student::Student(){                                                                 //for when the class is first initiliazed, these are the base values
    firstName = "";
    lastName = "";
    GPA = 0.0;

    credits = 0;

    address = new Address;
    birthDate = new Date;
    completionDate = new Date;


}

Student::~Student(){                                                                //Deconstructor for when the program is reaching the end
    delete (address);
    delete (birthDate);
    delete (completionDate);
    //std::cout << "my final breath" << "\n";
}




void Student::setStudent(std::string data){                                         
    std::stringstream ss;

    ss.clear();
    ss.str("");
    ss.str(data);


    std::string  first, last, streetAdd, street2, city, state, zip, birthday, grad, gpa, hours;                     


    std::getline(ss,  first , ',');
    std::getline(ss, last  , ',');                                  //using stringstream I split the string into its parts and for first and last name it is simple to update student class first name and last 
                                                                    //ths same logic goes for gpa and credit hours
    Student::firstName = first;
    Student::lastName = last;

   ///------------------------------------------------------------------------------------------

    std::getline(ss,  streetAdd , ',');
    std::getline(ss,  street2 , ',');

    std::getline(ss, city  , ',');                                 //for address, the same idea is done, the line is split and passed to the address setter method
    std::getline(ss, state  , ',');
    std::getline(ss,  zip , ',');

    address->setAddress(streetAdd, street2, city, state, zip);

   ///------------------------------------------------------------------------------------------
    
    std::getline (ss, birthday, ',');
    std::string monthOfBirth, dayOfBirth, yearOfBirth;

    std::stringstream birthdaySplitter;

    birthdaySplitter.clear();
    birthdaySplitter.str("");
    birthdaySplitter.str(birthday);

    std::getline(birthdaySplitter, monthOfBirth, '/');                                              //using another strintstream to further split it into its seperate numbers, and then using the setter methods for each. using / as a delimiter
    std::getline(birthdaySplitter, dayOfBirth, '/');
    std::getline(birthdaySplitter, yearOfBirth, '/');

    birthDate->setMonth(std::stoi(monthOfBirth));
    birthDate->setDay(std::stoi(dayOfBirth));
    birthDate->setYear(std::stoi(yearOfBirth));

   ///------------------------------------------------------------------------------------------

    std::getline(ss, grad  , ',');
    std::string monthOfGrad, dayOfGrad, yearOfGrad;

    std::stringstream gradSplitter;

    gradSplitter.clear();
    gradSplitter.str("");
    gradSplitter.str(grad);                                                                     //same idea as above, split them set methods are called

    std::getline(gradSplitter, monthOfGrad, '/');
    std::getline(gradSplitter, dayOfGrad, '/');
    std::getline(gradSplitter, yearOfGrad, '/');

    completionDate->setMonth(std::stoi(monthOfGrad));
    completionDate->setDay(std::stoi(dayOfGrad));
    completionDate->setYear(std::stoi(yearOfGrad));

   ///------------------------------------------------------------------------------------------

    std::getline(ss, gpa  , ',');
    std::getline(ss, hours  , ',');                                 

    Student::GPA = std::stof(gpa);
    Student::credits = std::stoi(hours);



}

void Student::getFullReport(){                                              //function to create an full report file and ouput to it the organized report. using ofstream as well as the getter methods
    std::ofstream outFile;
    outFile.open("fullReport.txt", std::ios::app);
    if(outFile.is_open()){
        outFile << "Student Name: " << firstName << " " << lastName << "\n";
        outFile << "Address 1: " << address->getAdd1() << "\n";
        outFile << "Address 2: " << address->getAdd2() << "\n";
        outFile << "City: " << address->getCity() << "\n";
        outFile << "State: " << address->getState() << "\n";
        outFile << "ZipCode: " << address->getZip() << "\n";
        outFile << "Date of Birth: " << birthDate->getMonth() << "/" << birthDate->getDay() << "/" << birthDate->getYear() << "\n";
        outFile << "Graduation Date: " << completionDate->getMonth() << "/" << completionDate->getDay() << "/" << completionDate->getYear() << "\n";
        outFile << "GPA: " << GPA << "\n";
        outFile << "Credit Hours Completed: " << credits << "\n";
        outFile << "------------------------------------------------------------------------- \n";

    }
    else {
        outFile << "Error \n";
    }
    outFile.close();

}

void Student::getShortReport(){                     //same idea as above, but a short report only using first and last name. 
    std::ofstream outFile;
    outFile.open("shortReport.txt", std::ios::app);
    if(outFile.is_open()){
        outFile << "First Name is: " << firstName << "\n";
        outFile << "Last Name is: " << lastName << "\n";
        outFile << "------------------------------------------------------------------------- \n";   
        }
    else {
        outFile << "Error \n";
    }

    outFile.close();
}