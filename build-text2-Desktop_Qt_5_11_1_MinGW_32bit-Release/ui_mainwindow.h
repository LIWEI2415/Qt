/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionnew_N;
    QAction *actionopen_O;
    QAction *actionclose_C;
    QAction *actionsave_S;
    QAction *actionsave_as_A;
    QAction *actionexit_X;
    QAction *actionbackout_Z;
    QAction *actioncopy_C;
    QAction *actioncut_X;
    QAction *actionpaste_V;
    QAction *actionfind_F;
    QAction *actionimprint_Z;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_C;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(505, 386);
        actionnew_N = new QAction(MainWindow);
        actionnew_N->setObjectName(QStringLiteral("actionnew_N"));
        QIcon icon;
        icon.addFile(QStringLiteral("images/documents_files_128px_11652_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionnew_N->setIcon(icon);
        actionopen_O = new QAction(MainWindow);
        actionopen_O->setObjectName(QStringLiteral("actionopen_O"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("images/open_512px_1142209_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionopen_O->setIcon(icon1);
        actionclose_C = new QAction(MainWindow);
        actionclose_C->setObjectName(QStringLiteral("actionclose_C"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("images/close_512px_1142186_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionclose_C->setIcon(icon2);
        actionsave_S = new QAction(MainWindow);
        actionsave_S->setObjectName(QStringLiteral("actionsave_S"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("images/Save_256px_1093707_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionsave_S->setIcon(icon3);
        actionsave_as_A = new QAction(MainWindow);
        actionsave_as_A->setObjectName(QStringLiteral("actionsave_as_A"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("images/document_save_32px_16893_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionsave_as_A->setIcon(icon4);
        actionexit_X = new QAction(MainWindow);
        actionexit_X->setObjectName(QStringLiteral("actionexit_X"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("images/exit_out_128px_10885_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionexit_X->setIcon(icon5);
        actionbackout_Z = new QAction(MainWindow);
        actionbackout_Z->setObjectName(QStringLiteral("actionbackout_Z"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("images/stock_undo_128px_43395_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionbackout_Z->setIcon(icon6);
        actioncopy_C = new QAction(MainWindow);
        actioncopy_C->setObjectName(QStringLiteral("actioncopy_C"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("images/copy_256px_1139197_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        actioncopy_C->setIcon(icon7);
        actioncut_X = new QAction(MainWindow);
        actioncut_X->setObjectName(QStringLiteral("actioncut_X"));
        QIcon icon8;
        icon8.addFile(QStringLiteral("images/cut_edit_128px_16040_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        actioncut_X->setIcon(icon8);
        actionpaste_V = new QAction(MainWindow);
        actionpaste_V->setObjectName(QStringLiteral("actionpaste_V"));
        QIcon icon9;
        icon9.addFile(QStringLiteral("images/paste_512px_1175635_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionpaste_V->setIcon(icon9);
        actionfind_F = new QAction(MainWindow);
        actionfind_F->setObjectName(QStringLiteral("actionfind_F"));
        QIcon icon10;
        icon10.addFile(QStringLiteral("images/Internet_Lookup_Folder_255px_1123089_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionfind_F->setIcon(icon10);
        actionimprint_Z = new QAction(MainWindow);
        actionimprint_Z->setObjectName(QStringLiteral("actionimprint_Z"));
        QIcon icon11;
        icon11.addFile(QStringLiteral("images/emblem_note_128px_15992_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionimprint_Z->setIcon(icon11);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 505, 26));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_C = new QMenu(menuBar);
        menu_C->setObjectName(QStringLiteral("menu_C"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_C->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addSeparator();
        menu_F->addAction(actionnew_N);
        menu_F->addAction(actionopen_O);
        menu_F->addAction(actionclose_C);
        menu_F->addSeparator();
        menu_F->addAction(actionsave_S);
        menu_F->addAction(actionsave_as_A);
        menu_F->addSeparator();
        menu_F->addAction(actionexit_X);
        menu_C->addAction(actionbackout_Z);
        menu_C->addSeparator();
        menu_C->addAction(actioncopy_C);
        menu_C->addAction(actioncut_X);
        menu_C->addAction(actionpaste_V);
        menu_C->addSeparator();
        menu_C->addAction(actionfind_F);
        menu_H->addAction(actionimprint_Z);
        mainToolBar->addAction(actionnew_N);
        mainToolBar->addAction(actionsave_S);
        mainToolBar->addAction(actionsave_as_A);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionbackout_Z);
        mainToolBar->addAction(actioncut_X);
        mainToolBar->addAction(actioncopy_C);
        mainToolBar->addAction(actionpaste_V);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionfind_F);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionnew_N->setText(QApplication::translate("MainWindow", "new(&N)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionnew_N->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionopen_O->setText(QApplication::translate("MainWindow", "open(&O)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionopen_O->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionclose_C->setText(QApplication::translate("MainWindow", "close(&C)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionclose_C->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionsave_S->setText(QApplication::translate("MainWindow", "save(&S)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionsave_S->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionsave_as_A->setText(QApplication::translate("MainWindow", "save as(&A)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionsave_as_A->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        actionexit_X->setText(QApplication::translate("MainWindow", "exit(&X)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionexit_X->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionbackout_Z->setText(QApplication::translate("MainWindow", "backout(&Z)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionbackout_Z->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actioncopy_C->setText(QApplication::translate("MainWindow", "copy(&C)", nullptr));
#ifndef QT_NO_SHORTCUT
        actioncopy_C->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actioncut_X->setText(QApplication::translate("MainWindow", "cut(&X)", nullptr));
#ifndef QT_NO_SHORTCUT
        actioncut_X->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionpaste_V->setText(QApplication::translate("MainWindow", "paste(&V)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionpaste_V->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionfind_F->setText(QApplication::translate("MainWindow", "find(&F)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionfind_F->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionimprint_Z->setText(QApplication::translate("MainWindow", "imprint(&Z)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionimprint_Z->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_C->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221\357\274\210&E)", nullptr));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251\357\274\210&H\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
