#include "external.h"

#include <KAuth>
#include <QString>
#include <QCoreApplication>

//External::External(QString& cmd): m_ExitCode(-1), m_Command() {}
QVariantMap args;
using namespace KAuth;
bool External::execute() {
    qDebug() << "Executing " << m_Command;
    //return true;
    Action action("org.kde.kauthexp.external.executehelper");
    action.setHelperId("org.kde.kauthexp.external");
    action.setArguments(args);
    ExecuteJob *job = action.execute();
    if (!job->exec()) {
       qDebug() << "KAuth returned an error code:" << job->error();
    }
    return true;
}

bool External::copyBlock() {
    qDebug() << "CopyBlock " << m_Command;
    Action action("org.kde.kauthexp.external.copyblockhelper");
    action.setHelperId("org.kde.kauthexp.external");
    //readAction.setArguments(args);
    ExecuteJob *job = action.execute();
    if (!job->exec()) {
       qDebug() << "KAuth returned an error code:" << job->error();
    }

    return true;

}

