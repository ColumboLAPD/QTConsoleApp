#include "QDateDemo.h"

void demoDate1()
{
    QTextStream out(stdout);
    out.setCodec("CP866");

    QDate date1(2020, 07, 06);
    out << "The date is " << date1.toString() << endl;

    QDate date2;
    date2.setDate(2020, 7, 6);
    out << "The date is " << date2.toString() << endl;

    QTime time1(20, 34, 25);
    out << "The time is " << time1.toString("hh:mm:ss.zzz") << endl;

    QTime time2;
    time2.setHMS(20, 35, 35);
    out << "The time is " << time2.toString() << endl;
}

