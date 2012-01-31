#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QtGui/QSplitter>
#include <QtGui/QPlainTextEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QSplitter *splitter = new QSplitter;
    QPlainTextEdit *edit1 = new QPlainTextEdit;
    QPlainTextEdit *edit2 = new QPlainTextEdit;

    splitter->insertWidget(0, edit1);
    splitter->insertWidget(1, edit2);

    w.setCentralWidget(splitter);

    w.show();
    
    return a.exec();
}
