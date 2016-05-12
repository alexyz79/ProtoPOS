#include "protoposapp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProtoPOSApp w;
    w.show();

    return a.exec();
}
