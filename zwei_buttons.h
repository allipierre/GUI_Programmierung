#ifndef ZWEI_BUTTONS_H
#define ZWEI_BUTTONS_H
#include <QApplication>
#include <QMainWindow>
#include<QLabel>
#include<QLayout>
#include<QPushButton>>
#include<QFont>
class zwei_buttons : public QMainWindow
{
    Q_OBJECT

public:
    zwei_buttons(QWidget *parent = 0);
    ~zwei_buttons();
private:
    QVBoxLayout *vLayout;
    QWidget *mywidget;
    QPushButton *ester_button;
    QPushButton *zweiter_button;
    QLabel *mylabel;

};

#endif // ZWEI_BUTTONS_H
