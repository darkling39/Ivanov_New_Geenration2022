#ifndef CNTER_H
#define CNTER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Cnter; }
QT_END_NAMESPACE

class Cnter : public QMainWindow
{
    Q_OBJECT

public:
    Cnter(QWidget *parent = nullptr);
    ~Cnter();

private:
    Ui::Cnter *ui;
    void literallyCount();
};
#endif // CNTER_H
