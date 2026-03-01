#ifndef DAYTILEWIDGET_H
#define DAYTILEWIDGET_H

#include <QWidget>

namespace Ui {
class daytilewidget;
}

class daytilewidget : public QWidget
{
    Q_OBJECT

public:
    explicit daytilewidget(QWidget *parent = nullptr);
    ~daytilewidget();

private:
    Ui::daytilewidget *ui;
};

#endif // DAYTILEWIDGET_H
