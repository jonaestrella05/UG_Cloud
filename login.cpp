/*
#include "login.h"
#include "ui_login.h"
#include <QDialog>
#include "mainwindow.h"

#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMessageBox>
#include <QNetworkReply>
#include <QObject>
#include <QUrlQuery>
#include <QNetworkCookie>
#include <QtCore>

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_btnLog_clicked()
{
    QUrlQuery postData;
    postData.addQueryItem("user", userLog);
    postData.addQueryItem("pass", passLog);
    MainWindow *user = new MainWindow;
    test();
    QNetworkAccessManager *manager = new QNetworkAccessManager;
    manager = user->userLogIn(postData);
    //user-("https://backcloud2019.herokuapp.com/datos")()
    qDebug() << manager->cookieJar();
    user->getDatos(manager);
    this->close();
    return;
}

void login::on_tbxUser_textChanged(const QString &arg1)
{
    userLog = arg1;
}

void login::on_tbxPass_textChanged(const QString &arg1)
{
    passLog = arg1;
}
*/

