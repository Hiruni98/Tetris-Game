#include "precompiledHeader.h"
#include "mainWindowTetris.h"
#include "ui_mainWindowTetris.h"
#include "tetrixwindow.h"

/*
*	constructor Main Window Tetris
*	@name	: MainWindowTetris
*	@param	: QWidget
*	@return : void
*/
MainWindowTetris::MainWindowTetris(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowTetris)
{
    //Displays the top bar
    ui->setupUi(this);
	TetrixWindow *window = new TetrixWindow;
	QHBoxLayout *layout = new QHBoxLayout;
	layout->addWidget(window);
	setCentralWidget(new QWidget);
	centralWidget()->setLayout(layout);
    setFixedSize(500, 670);
    this->setWindowTitle("Tetris Game");
	this->setWindowIcon(QIcon(":/picture/tetris.png"));
    createMenuBar();
}

/*
*	create MenuBar for parent widget
*	@name	: createMenuBar
*	@param	: no param.
*	@return : void
*/
void MainWindowTetris::createMenuBar()
{
    QMenu *helpMenu = menuBar()->addMenu(tr("&Help"));
    QAction *aboutAct = helpMenu->addAction(tr("&How to play?"), this, &MainWindowTetris::commande);
}

/*
*	create MessageBox for control key tetris 
*	@name	: commande
*	@param	: no param.
*	@return : void
*/
void MainWindowTetris::commande()
{
   QMessageBox::about(this, tr("How to Play?"),
            tr("<br><b>Press right key → :</b>  to move right \n</br>"
               "<br><b>Press left key ← :</b>  to move left \n</br>"
               "<br><b>Press up key ↑ :</b>  to rotate counter-clockwise \n</br>"
               "<br><b>Press down key ↓ :</b>  rotate clockwise \n</br>"
               "<br><b>Press space bar :</b>  to drop down \n</br>"
               "<br><b>Press key D :</b>  to drop one line down</br>"));
}


/*
*	destructor Main Window Tetris
*	@name	: ~MainWindowTetris
*	@param	: no param.
*	@return : void
*/
MainWindowTetris::~MainWindowTetris()
{
    delete ui;
}
