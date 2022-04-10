  //Decleration of Class Date.

#ifndef DATE_H
#define DATE_H
class Date{

    private:

        int day;
        int month;
        int year;
        enum Month {
            January, February, March, April, May, June,
            July, August,September,October, November, December
        };
        Month m;
        int checkdate(int);

    public:
        /*Overloading Constructors*/
        Date(int = 1, int = 1, int = 1900);//constructor 1
        Date(int = 1, Month = January, int = 1900);//constructor 2
        /*Read functions*/
        int read_date() const;
        int read_month() const;
        int read_year() const;
        Month read_month_ex() const;
        /*Display Functions*/
        void Display_version1() const;//mm/dd/yy
        void Display_version2() const;//dd.mm.YYYY
        void Display_version3() const;//May 14,1992
};
#endif

/*Decleration of the Class Members*/

#include<iostream>
using namespace std;

using std::cout;
using std::endl;


#ifndef DATE_H

#endif // DATE_Hdefine DATE_H

Date::Date(int dd, int mm, int yy){

    month = (mm>0 && mm<12) ? mm : 1;//ensure that month is valid
    year = yy;
    day=checkdate(dd);

}
Date::Date(int dd, Month mm, int yy){

    m = (mm>January && mm<December) ? mm : January;//ensure that month is valid
    year = yy;
    day = checkdate(dd);

}
int Date::checkdate(int dd){

    static const int daysinamonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (dd>0 && dd <= daysinamonth[month]);
    return dd;
    if (month==2 && dd==29 &&(year%400==0 || (year%4==0 && year%100!=0)));
    return dd;
    return 1;//if it is not valid date.
}
int Date::read_date() const{
    return day;
};
int Date::read_month() const{
    return month;
};
int Date::read_year() const{
    return year;
};
Date::Month Date::read_month_ex() const{
    return m;
};
void Date::Display_version1() const{

    cout << read_month() << "." << read_date() << "." << (read_year()-1900) << endl;

};//mm/dd/yy
void Date::Display_version2() const{

    cout << read_date() << "." << read_month() << "." << read_year() << endl;

};//dd.mm.YYYY
void Date::Display_version3() const{


    cout << read_month_ex() <<" "<< read_date() << "," << read_year() << endl;

};//May 14,1992
#include<iostream>

using std::cout;
using std::endl;


#ifndef DATE_H

#endif // DATE_H#define DATE_H

int main(){

    Date d1(5, 10, 1990);

    d1.Display_version1();//mm/dd/yy
    d1.Display_version2();//dd.mm.YYYY
    d1.Display_version3();//display as May 14,1992, problem is here!!!

    while (1);
}
