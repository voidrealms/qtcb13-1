#include <QCoreApplication>
#include <QDebug>
#include <iostream>

//Errors vs exception

//An Error "indicates serious problems that a reasonable application should not try to catch."  - bad bad things
//An Exception "indicates conditions that a reasonable application might want to catch." - most things

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    do {

        int max  = 44;
        int div = 0;

        qInfo() << "Enter a number to divide by (Or zero for an issue!)";

        cin >> div;
        int answer = max / div; // Exception - we want to catch!!!
        qInfo() << answer;

    }while(true);


    return a.exec();
}
