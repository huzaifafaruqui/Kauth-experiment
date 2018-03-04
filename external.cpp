#include "external.h"

#include <QString>


//External::External(QString& cmd): m_ExitCode(-1), m_Command() {}

bool External::execute() {
    qDebug() << "Executing " << m_Command;
    return true;

}

bool External::copyBlock() {
    qDebug() << "CopyBlock " << m_Command;
    return true;

}

