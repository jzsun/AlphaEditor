#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initAlphaEdtor();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initAlphaEdtor()
{
    setEditorTitle();
    createActions();
    createMenus();
}

void MainWindow::setEditorTitle()
{
    this->setWindowTitle("AlphaEditor");
    QIcon icon(QPixmap(":/images/icon.png"));
    this->setWindowIcon(icon);
}

void MainWindow::createMenus()
{
    {
        //File
        mFileMenu = new QMenu("File");
        this->menuBar()->addMenu(mFileMenu);
    }

    {
        //Edit
        mEditMenu = new QMenu("Edit");
        this->menuBar()->addMenu(mEditMenu);
    }

    {
        //Help
        mHelpMenu = new QMenu("Help");
        mHelpMenu->addAction(mAboutQtAct);
        mHelpMenu->addAction(mAboutEditorAct);
        this->menuBar()->addMenu(mHelpMenu);
    }

}

void MainWindow::createActions()
{
    {
        //File
    }

    {
        //Edit
    }

    {
        //Help
        mAboutQtAct = new QAction("About Qt", this);
        mAboutQtAct->setStatusTip("It is about Qt!");

        mAboutEditorAct = new QAction("About Alpha Editor", this);
        mAboutEditorAct->setStatusTip("It is about AlphaEditor info!");
    }
}
