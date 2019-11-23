#include "transfer_checklist.h"
#include "ui_transfer_checklist.h"
#include <QMessageBox>


Transfer_CheckList::Transfer_CheckList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Transfer_CheckList)
{
    ui->setupUi(this);

}

Transfer_CheckList::~Transfer_CheckList()
{
    delete ui;
}

void Transfer_CheckList::on_AddWidgetPushButton_clicked()
{
    //create new list widget
QListWidgetItem* listWidgetItem = new QListWidgetItem(ui->MainistWidget_2);
ui->MainistWidget_2->addItem(listWidgetItem);

//create an object of widgetItem which will be added to the MainistWidget
WidgetItems* widgetItem = new WidgetItems;

//give listwidgetItem same size as WidgetItems
listWidgetItem->setSizeHint(widgetItem->sizeHint());

//add itemWidget to list
ui->MainistWidget_2->setItemWidget(listWidgetItem, widgetItem);
}

void Transfer_CheckList::on_DeleteSchoolPushButton_clicked()
{
    //create yes or no message box
    QMessageBox::StandardButton input;
    input = QMessageBox::question(this, "Transer Checklist", "Delete contents?", QMessageBox::Yes | QMessageBox::No);

    if(input == QMessageBox::Yes)
    {
        //manually delete selected
        qDeleteAll(ui->MainistWidget_2->selectedItems());
    }

}
