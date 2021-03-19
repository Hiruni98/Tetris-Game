#ifndef MAINWINDOWTETRIS_H
#define MAINWINDOWTETRIS_H

#include "precompiledHeader.h"

namespace Ui {
class MainWindowTetris;
}

class MainWindowTetris : public QMainWindow
{
    /*Declares the class as a QObject which is the base class
    for all Qt objects and handle events*/
    Q_OBJECT

public:
    explicit MainWindowTetris(QWidget *parent = nullptr);
    ~MainWindowTetris();

private:
    Ui::MainWindowTetris *ui;

    //will tie actions to functions
    void createMenuBar();

private slots:
    void commande();


};

#endif // MAINWINDOWTETRIS_H
