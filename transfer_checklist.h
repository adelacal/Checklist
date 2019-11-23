#ifndef TRANSFER_CHECKLIST_H
#define TRANSFER_CHECKLIST_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>

#include "widgetitems.h"

namespace Ui {
class Transfer_CheckList;
}

class Transfer_CheckList : public QMainWindow
{
    Q_OBJECT

public:
    explicit Transfer_CheckList(QWidget *parent = 0);
    ~Transfer_CheckList();

private slots:
    void on_AddWidgetPushButton_clicked();
    void on_DeleteSchoolPushButton_clicked();

private:
    Ui::Transfer_CheckList *ui;

};



#endif // TRANSFER_CHECKLIST_H
