#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS


#include <iostream>
#include <string>


class Address {
    private:
        std::string address1;
        std::string address2;

        std::string city;
        std::string state;
        std::string zipCode;

    public:
        Address();
        

        std::string getAdd1();
        std::string getAdd2();

        std::string getCity();
        std::string getState();
        std::string getZip();

        void setAddress(std::string add1, std::string add2, std::string inCity, std::string inState, std::string inZip);




};






#endif