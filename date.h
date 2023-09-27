#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS


class Date {
    private:
        int month;
        int day;
        int year;

    public:
        Date();

        int getMonth();
        int getDay();
        int getYear();

        void setMonth(int inMonth);
        void setDay(int inDay);
        void setYear(int inYear);

};



#endif