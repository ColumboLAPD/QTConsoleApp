#include "QStringDemo.h"

void demo1()
{
    QTextStream out(stdout);//объект для вывода строк
    QString a = "love";
    a.append(" chess!");//добавление в конец
    a.prepend("I ");//добавление в начало
    out << a << endl;
    out << "The a string has " << a.count() << " characters.\n";//количество символов
    out << a.toUpper() << endl;//верхний регистр
    out << a.toLower() << endl;//нижний регистр
}

void demo2()
{
    QTextStream out(stdout);

    QString str1 = "The night train";//копирующая инициализаця
    out << str1 << endl;

    QString str2("A yellow rose");//прямая инициализация
    out << str2 << endl;

    std::string ss1 = "A blue sky";
    QString str3 = ss1.c_str();//инициализация с помощью указателя на массив символов
    out << str3 << endl;

    std::string ss2 = "A think fog";
    QString str4 = QString::fromLatin1(ss2.c_str(), ss2.size());//инициализация через метод класса QString
    out << str4 << endl;

    char cs[] = "A deep forest";
    QString str5(cs);//прямая инициализация char массивом
    out << str5 << endl;
}
