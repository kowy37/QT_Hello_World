/********************************************************************************
** Form generated from reading UI file 'qt_hello_wold.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_HELLO_WOLD_H
#define UI_QT_HELLO_WOLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QT_Hello_WoldClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QT_Hello_WoldClass)
    {
        if (QT_Hello_WoldClass->objectName().isEmpty())
            QT_Hello_WoldClass->setObjectName(QStringLiteral("QT_Hello_WoldClass"));
        QT_Hello_WoldClass->resize(600, 400);
        centralWidget = new QWidget(QT_Hello_WoldClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 200, 161, 71));
        QT_Hello_WoldClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QT_Hello_WoldClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        QT_Hello_WoldClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QT_Hello_WoldClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QT_Hello_WoldClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QT_Hello_WoldClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QT_Hello_WoldClass->setStatusBar(statusBar);

        retranslateUi(QT_Hello_WoldClass);

        QMetaObject::connectSlotsByName(QT_Hello_WoldClass);
    } // setupUi

    void retranslateUi(QMainWindow *QT_Hello_WoldClass)
    {
        QT_Hello_WoldClass->setWindowTitle(QApplication::translate("QT_Hello_WoldClass", "QT_Hello_Wold", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QT_Hello_WoldClass", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QT_Hello_WoldClass: public Ui_QT_Hello_WoldClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_HELLO_WOLD_H
