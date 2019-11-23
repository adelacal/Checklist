#include "transfer_checklist.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Transfer_CheckList w;
    w.show();


    return a.exec();
}
