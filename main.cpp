#include "zwei_buttons.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    zwei_buttons w;
    w.show();

    return a.exec();
}
