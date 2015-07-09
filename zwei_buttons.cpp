#include "zwei_buttons.h"

zwei_buttons::zwei_buttons(QWidget *parent)
    : QMainWindow(parent)
{
   this->mywidget=new QWidget();
    this->mywidget->setGeometry(200,100,450,150);
    this->ester_button=new QPushButton("Quit(pressed():schon beim Mausclick",this->mywidget);
    this->ester_button->setGeometry(30,10,400,30);

    /*
     * QApplication::instance() kann damit das Programm beim pressed schließen
     * */
    connect(this->ester_button,SIGNAL(pressed()),QApplication::instance(),SLOT(quit()));

    this->mylabel=new QLabel("Ein Programm mit zwei Quit-buttons",this->mywidget);
    this->mylabel->setFont(QFont("Times",18,QFont::Bold));

    this->zweiter_button=new QPushButton("Quit(cliked():erst nach click und los lassen den Maus",this->mywidget);
    this->zweiter_button->setGeometry(30,90,400,50);
    connect(this->zweiter_button,SIGNAL(clicked()),QApplication::instance(),SLOT(quit()));

    this->mylabel->setGeometry(30,40,400,50);
    this->vLayout=new QVBoxLayout();


    this->vLayout->addWidget(this->ester_button);
    this->vLayout->addWidget(this->mylabel);
    this->vLayout->addWidget(this->zweiter_button);
   // this->vLayout->addWidget(this->lbEncriptionOutput);
    mywidget->setLayout(this->vLayout);
    this->setCentralWidget(mywidget);


}

zwei_buttons::~zwei_buttons()
{

}
