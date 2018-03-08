#include "external.h"

#include <QString>
#include <iostream>
#include <QCoreApplication>

bool m1(QString& cmd) {
    External obj(cmd);
    return obj.execute();
}

bool m2(QString& cmd) {
    External obj(cmd);
    return obj.copyBlock();
}


int main(int argc, char **argv) {
    QCoreApplication app(argc, argv);
    int ch;
    QString cmd1 = "sfdisk";
    QString cmd2 = "dd";

    /*do {
        std::cin >> ch;
        switch(ch){
            case -1 : break;
            case 0:  m1(cmd1);
                    break;
            default: m2(cmd2);
                    break;

        }
    }while(ch>=0);
    */
    m1(cmd1);
    return app.exec();
}

