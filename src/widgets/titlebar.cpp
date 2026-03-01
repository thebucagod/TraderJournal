#include "titlebar.h"
#include "ui_titlebar.h"

#include <QMouseEvent>

titleBar::titleBar(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::titleBar)
{
    ui->setupUi(this);
    setCursor(Qt::ArrowCursor);
}


titleBar::~titleBar()
{
    delete ui;
}
