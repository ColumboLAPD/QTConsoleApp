#include "QStringDemo.h"

void demoString1()
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

void demoString2()
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

void demoString3()
{
    QTextStream out(stdout);
    QString a = "Eagle\n";
    out << a << endl;
    out << "a[0]" << a[0] << endl;
    out << "a[4]" << a[4] << endl;
    out << "a[1]" << a.at(1) << endl;
    out << a.count() << endl;

    QString b = "Creator %1";
    QChar qc = a[2];
    out << b.arg(qc) << endl;
}

void demoString4()
{
    QTextStream out(stdout);

    QString str = "The night train";
    out << str.right(5) << endl;//вывод первых пяти символов
    out << str.left(5) << endl;//вывод последних пяти символов
    out << str.mid(2, 6) << endl;//сс индекса 2 длиной 6

    QString str2 = "The big apple";
    QStringRef str3(&str2, 0, 7);
    out << str3 << endl;
}

void demoString5()
{
    QTextStream out(stdout);
    QString str = "There are many stars.";

    foreach(QChar qc, str)
        out << qc << " ";
    out << endl;

    for (QChar *it = str.begin(); it != str.end(); ++it)
        out << *it << " ";
    out << endl;

    for (int i = 0; i < str.size(); ++i)
        out << str[i] << " ";
    out << endl;

    for (int i = 0; i < str.length(); ++i)
        out << str.at(i) << " ";
    out << endl;
}

void demoString6()
{
    QTextStream out(stdout);

    QString str1 = "Rain";
    QString str2 = "rain";
    QString str3 = "rain\n";

    if(QString::compare(str1, str2) == 0)
        out << "string 1 equals string 2\n";
    else
        out << "string 1 not equals string 2\n";

    if(QString::compare(str1, str2, Qt::CaseInsensitive) == 0)//сравнение без учета регистра
        out << "string 1 equals string 2\n";
    else
        out << "string 1 not equals string 2\n";

    if(QString::compare(str2, str3) == 0)
        out << "string 1 equals string 2\n";
    else
        out << "string 1 not equals string 2\n";

    str3.chop(1);//удаление n символов начиная с последнего
    if (QString::compare(str2, str3) == 0)
        out << "string 1 equals string 2\n";
    else
        out << "string 1 not equals string 2\n";
}

void demoString7()
{
    QTextStream out(stdout);
    QString a = "22";
    QString b = "33";
    out << a.toInt() + b.toInt() << endl;

    QString s1, s2;
    int n1 = 10, n2 = 20;
    out << s1.setNum(n1) + s2.setNum(n2) << endl;
    out << QString::number(n1) + QString::number(n2) << endl;
}

void demoString8()
{
    QTextStream out(stdout);
    int digits = 0, letters = 0, spaces = 0, puncts = 0;
    QString str = "7 white, 3 red roses.";
    out << str << endl;

    foreach(auto qc, str)
    {
        if(qc.isLetter())
            ++letters;
        else if(qc.isDigit())
            ++digits;
        else if(qc.isSpace())
            ++spaces;
        else if(qc.isPunct())
            ++puncts;
    }

    out << QString("There are %1 characters.").arg(str.count()) << endl;
    out << QString("There are %1 letters.").arg(letters) << endl;
    out << QString("There are %1 digits.").arg(digits) << endl;
    out << QString("There are %1 spaces.").arg(spaces) << endl;
    out << QString("There are %1 puncts.").arg(puncts) << endl;
}

void demoString9()
{
    QTextStream out(stdout);
    QString str = "Lovely";

    str.append(" season");
    out << str << endl;

    str.remove((3, 3));
    out << str << endl;

    str.replace(3, 2, "girl");
    out << str << endl;

    str.clear();
    if(str.isEmpty())
        out << "String is empty.\n";
}
