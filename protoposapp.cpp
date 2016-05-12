#include "protoposapp.h"
#include "ui_protoposapp.h"

ProtoPOSApp::ProtoPOSApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ProtoPOSApp)
{
    ui->setupUi(this);
}

ProtoPOSApp::~ProtoPOSApp()
{
    delete ui;
}
