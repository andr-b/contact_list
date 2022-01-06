#include "widget.h"
#include <vector>
#include <string>
#include <ContactList.h>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ContactList w;
    w.resize(200, 450);
    w.show();
    return a.exec();
}
