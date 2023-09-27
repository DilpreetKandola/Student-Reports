#include <iostream>
#include <string>

#include "date.h"


Date::Date(){
    month = 0;
    year = 0;
    day = 0;

}


int Date::getDay(){
    return Date::day;
}
void Date::setDay(int inDay){
    day = inDay;
}
//Setter and getter for day ^^^^

int Date::getMonth(){
    return Date::month;
}
void Date::setMonth(int inMonth){
    month = inMonth;
}
//Setter and getter for month ^^^^ 

int Date::getYear(){
    return Date::year;
}
void Date::setYear(int inYear){
    year = inYear;
}
//Setter and getter for year ^^^^