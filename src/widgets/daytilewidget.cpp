#include "daytilewidget.h"
#include "ui_daytilewidget.h"

daytilewidget::daytilewidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::daytilewidget)
{
    ui->setupUi(this);
}

daytilewidget::~daytilewidget()
{
    delete ui;
}
