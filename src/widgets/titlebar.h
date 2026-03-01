#ifndef TITLEBAR_H
#define TITLEBAR_H

#include <QWidget>

namespace Ui {
class titleBar;
}

class titleBar : public QWidget
{
    Q_OBJECT

public:
    explicit titleBar(QWidget *parent = nullptr);
    ~titleBar();

protected:
    // void mousePressEvent(QMouseEvent* event) override;
    // void mouseMoveEvent(QMouseEvent* event) override;
    // void mouseReleaseEvent(QMouseEvent* event) override;

private:
    Ui::titleBar *ui;

    bool dragging = false;
    QPoint dragStart; // Смещение от верхнего левого угла для курсора
};

#endif // TITLEBAR_H
