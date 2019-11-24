#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkCookieJar>
#include <string>
#include <QUrlQuery>

void test();

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:

private slots:
    void on_btnRequest_clicked();
    void onManagerFinished(QNetworkReply *);
    void onManagerFinishedGet(QNetworkReply *reply);
    void on_btnGet_clicked();
    bool saveLoginCookie(const QNetworkCookie &cookie);
    bool loadLoginCookie();
    void sendFile();



    void on_btnOpenFile_clicked();

private:
    Ui::MainWindow *ui;
    QUrl urlsearch, urlcookie;
    QNetworkAccessManager *manager;
    //QNetworkCookieJar *logcookies;
    QNetworkRequest request;
    QNetworkCookieJar *logcookies;
    bool m_loaded;
    QString filePath, fileName;

};
#endif // MAINWINDOW_H
