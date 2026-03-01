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

// Обработка события – нажатие л.к.м. по виджету
void titleBar::mousePressEvent(QMouseEvent* event) {
    if((event->button() == Qt::LeftButton) && !childAt(event->pos())) { // Нажатая кнопка л.к.м. и нет ребёнка на этой позиции
        dragging = true;
        dragStart = event->globalPosition().toPoint() - window()->frameGeometry().topLeft();
        event->accept();
        return;
    }
    QWidget::mousePressEvent(event);
}

titleBar::~titleBar()
{
    delete ui;
}
