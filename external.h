#if !defined(EXTERNAL_H)

#define EXTERNAL_H


#include <QDebug>
#include <QString>

class External : public QObject {

    Q_OBJECT

public:
   External(QString& cmd) : m_Command(cmd){}
   ~External(){
       //qDebug() << "bye";

}
public:
    bool copyBlock();
    bool execute();
    void setCommand(QString& cmd){
        m_Command = cmd;
    }
    int exitCode() {
        return m_ExitCode;
    }
private:
    int m_ExitCode;
    QString m_Command;
};

#endif
