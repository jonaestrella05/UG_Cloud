/*
#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QUrlQuery>

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_btnLog_clicked();

    void on_tbxUser_textChanged(const QString &arg1);

    void on_tbxPass_textChanged(const QString &arg1);

private:
    Ui::login *ui;
    QString userLog, passLog, userSign, passSign;
};

#endif // LOGIN_H
*/
