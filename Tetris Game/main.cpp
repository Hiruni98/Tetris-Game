#include "precompiledHeader.h"
#include "mainWindowTetris.h"
#include "tetrixwindow.h"

int main(int argc, char *argv[])
{
    // The main application
    QApplication applicationTetris(argc, argv);

    // Run and open the main window
    MainWindowTetris windowTetris;
    windowTetris.show();

    // Display the main window
    return applicationTetris.exec();
}


