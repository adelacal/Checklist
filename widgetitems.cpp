#include "widgetitems.h"
#include "ui_widgetitems.h"
#include <QMessageBox>

WidgetItems::WidgetItems(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetItems)
{
    ui->setupUi(this);
    setConditions();
}

WidgetItems::~WidgetItems()
{
    delete ui;
}

void WidgetItems::setConditions()
{
    ClassInputValidator = new QRegExpValidator(QRegExp("[A-Za-z]{3}+-[0-9A-Z_]{3}"),this);
    ui->ClassName->setValidator(ClassInputValidator);
    setInputMask();
}
void WidgetItems::setInputMask()
{
    ui->ClassName->setInputMask("AAA-99A");
}

void WidgetItems::on_AddClassPushButton_clicked()
{
    QListWidget* list = ui->listWidget;
    QListWidgetItem* item = new QListWidgetItem(ui->ClassName->text());
    item->setFlags(item->flags() | Qt::ItemIsUserCheckable);
    item->setCheckState(Qt::Unchecked);
    list->addItem(item);
}

void WidgetItems::on_AddSchoolPushButton_clicked()
{
    ui->Schoollabel->setText(ui->comboBox->currentText());
}

void WidgetItems::on_ClearPushButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Transer Checklist", "Delete selected classes?", QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::Yes)
    {
        //manually delete selected
        qDeleteAll(ui->listWidget->selectedItems());
    }
}
