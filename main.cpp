#include <QCoreApplication>
#include <QTextStream>
#include <iostream>
#include <QDate>
#include <QTime>

int main(int argc, char *argv[])
{
    QTextStream out(stdout);
    out.setCodec("CP866");

    QDate date1(2020, 6, 19);
    out << date1.toString() << endl;

    QDate cd = QDate::currentDate();
    out << cd.toString() << endl;

    return 0;
}
