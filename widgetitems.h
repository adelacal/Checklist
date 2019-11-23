#ifndef WIDGETITEMS_H
#define WIDGETITEMS_H

#include <QWidget>
#include <QValidator>
#include <QDebug>

namespace Ui {
class WidgetItems;
}

class WidgetItems : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetItems(QWidget *parent = nullptr);
    ~WidgetItems();

private slots:
    void on_AddClassPushButton_clicked();
    void on_AddSchoolPushButton_clicked();
    void on_ClearPushButton_clicked();

private:
    Ui::WidgetItems *ui;
    void setConditions();
    void setInputMask();
    QRegExpValidator* ClassInputValidator;
};


#endif // WIDGETITEMS_H
