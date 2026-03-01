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

// Обработка события – перетаскивание курсор виджета с зажатой л.к.м.
void titleBar::mouseMoveEvent(QMouseEvent* event) {
    if(dragging && (event->buttons() & Qt::LeftButton)) {
        window()->move(event->globalPosition().toPoint() - dragStart);
        event->accept();
        return;
    }
    QWidget::mouseMoveEvent(event);
}

// Обработка события – отжатие л.к.м.
void titleBar::mouseReleaseEvent(QMouseEvent* event) {
    if(dragging && event->button() == Qt::LeftButton) {
        dragging = false;
        event->accept();
        return;
    }
    QWidget::mouseReleaseEvent(event);
}

titleBar::~titleBar()
{
    delete ui;
}
