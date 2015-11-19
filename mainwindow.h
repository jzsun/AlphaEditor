#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void initAlphaEdtor();
    void setEditorTitle();
    void createMenus();
    void createActions();

    QMenu* mFileMenu;
    QMenu* mEditMenu;
    QMenu* mHelpMenu;

    QAction* mAboutQtAct;
    QAction* mAboutEditorAct;
};

#endif // MAINWINDOW_H
