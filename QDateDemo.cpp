#include "QDateDemo.h"

void demoDate1()
{
    QTextStream out(stdout);
    out.setCodec("CP866");

    QDate date1(2020, 07, 05);
    out << "The date is " << date1.toString() << endl;

    QDate date2;
    date2.setDate(2020, 7, 6);
    out << "The date is " << date2.toString() << endl;

    QTime time1(20, 34, 25);
    out << "The time is " << time1.toString("hh:mm:ss.zzz") << endl;

    QTime time2;
    time2.setHMS(20, 35, 35);
    out << "The time is " << time2.toString() << endl;

    QDate currentDate = QDate::currentDate();
    QTime currentTime = QTime::currentTime();
    out << currentDate.toString() << "\t" << currentTime.toString("hh:mm:ss,zzz") << endl;;

    if (date1 < date2)
        out << date1.toString() << " come before " << date2.toString() << endl;
    else
        out << date1.toString() << " come after " << date2.toString() << endl;

    int currentYear = currentDate.year();
    if(QDate::isLeapYear(currentYear))
        out << "Current year is leap year\n";
    else
        out << "Current year is not leap year\n";

    QList<int> years({2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020});
    foreach(auto year, years)
    {
        if(QDate::isLeapYear(year))
            out << year << " is leap year\n";
        else
            out << year << " is not leap year\n";
    }
}

