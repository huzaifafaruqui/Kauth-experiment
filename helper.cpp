#include <QThread>
#include <QDebug>
#include <KAuth>

using namespace KAuth;

class MyHelper : public QObject
{
    Q_OBJECT
    public Q_SLOTS:
        ActionReply executehelper(const QVariantMap& args);
        ActionReply copyblockhelper(const QVariantMap& args);
};
//! [helper_declaration]

//! [helper_execute_action]
ActionReply MyHelper::executehelper(const QVariantMap& args)
{
    ActionReply reply;
    qDebug() << "execute";
    return reply;

}

ActionReply MyHelper::copyblockhelper(const QVariantMap &args)
{
    ActionReply reply;
    qDebug() << "copyBlock";
    return reply;

}


//! [helper_main]
KAUTH_HELPER_MAIN("org.kde.kauthexp.external", MyHelper)
//! [helper_main]

#include "helper.moc"

