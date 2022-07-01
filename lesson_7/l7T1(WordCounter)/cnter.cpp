#include "cnter.h"
#include "ui_cnter.h"
int i = 0;

Cnter::Cnter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cnter)
{
    ui->setupUi(this);
    connect(ui->te_skreen, &QTextEdit::textChanged, this, &Cnter::literallyCount);
}

Cnter::~Cnter()
{
    delete ui;
}

void Cnter::literallyCount()
{
    QString str = QString(ui->te_skreen->toPlainText());
    //qDebug() << str;
    for(; i < str.length(); i++)
    {
        if(str[i] == ' ' && (str[i-1] >= 'a' && str[i-1] <= 'z') && i != 0)
        {
            ui->sb_cnt->setValue(ui->sb_cnt->value()+1);
        }
    }
}

