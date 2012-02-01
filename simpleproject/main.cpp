#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QtGui/QSplitter>
#include <QtGui/QPlainTextEdit>
#include <QFileSystemModel>
#include <QTreeView>
#include <QListView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QSplitter *splitter = new QSplitter;
//    QPlainTextEdit *edit1 = new QPlainTextEdit;
//    QPlainTextEdit *edit2 = new QPlainTextEdit;

    QFileSystemModel *model = new QFileSystemModel(splitter);
    model->setRootPath(QDir::currentPath());

    QTreeView *tree = new QTreeView;
    tree->setModel(model);

    QListView *list = new QListView;
    list->setModel(model);

    tree->setSelectionModel(list->selectionModel());

    splitter->insertWidget(0, tree);
    splitter->insertWidget(1, list);

//    splitter->insertWidget(0, edit1);
//    splitter->insertWidget(1, edit2);

    w.setCentralWidget(splitter);

    w.show();
    
    return a.exec();
}
