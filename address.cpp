#include <iostream>
#include <string>

#include "address.h"

Address::Address(){
    address1 = "";
    address2 = "";

    city = "";
    state = "";
    zipCode = "";

}


std::string Address::getAdd1(){
    return Address::address1;
}

// getter for address 1 ^^^^

std::string Address::getAdd2(){
    return Address::address2;
}

//getter for address 2 ^^^^

std::string Address::getCity(){
    return Address::city;
}

// getter for city ^^^^

std::string Address::getState(){
    return Address::state;
}

// getter for state ^^^^
std::string Address::getZip(){
    return Address::zipCode;
}

void Address::setAddress(std::string add1, std::string add2, std::string inCity, std::string inState, std::string inZip){
    address1 = add1;
    address2 = add2;

    city = inCity;
    state = inState;
    zipCode = inZip;
}

