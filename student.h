#ifndef  STUDENT_H_EXISTS
#define STUDENT_H_EXISTS


#include "date.h"
#include "address.h"

class Student {
    private:
        std::string firstName;
        std::string lastName;

        Address* address;
        Date* birthDate;
        Date* completionDate;

        float GPA;
        int credits;

    public:
        Student();
        ~Student();
        void setStudent(std::string data);
        void getFullReport();
        void getShortReport();



};






#endif