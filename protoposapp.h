#ifndef PROTOPOSAPP_H
#define PROTOPOSAPP_H

#include <QMainWindow>

namespace Ui {
class ProtoPOSApp;
}

class ProtoPOSApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProtoPOSApp(QWidget *parent = 0);
    ~ProtoPOSApp();

private:
    Ui::ProtoPOSApp *ui;
};

#endif // PROTOPOSAPP_H
