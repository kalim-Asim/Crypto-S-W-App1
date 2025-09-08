/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnUpload;
    QPushButton *btnProcess;
    QPushButton *btnDownload;
    QLabel *lblStatus;
    QTextEdit *textOutput;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnUpload = new QPushButton(centralwidget);
        btnUpload->setObjectName(QString::fromUtf8("btnUpload"));

        verticalLayout->addWidget(btnUpload);

        btnProcess = new QPushButton(centralwidget);
        btnProcess->setObjectName(QString::fromUtf8("btnProcess"));

        verticalLayout->addWidget(btnProcess);

        btnDownload = new QPushButton(centralwidget);
        btnDownload->setObjectName(QString::fromUtf8("btnDownload"));

        verticalLayout->addWidget(btnDownload);

        lblStatus = new QLabel(centralwidget);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));

        verticalLayout->addWidget(lblStatus);

        textOutput = new QTextEdit(centralwidget);
        textOutput->setObjectName(QString::fromUtf8("textOutput"));

        verticalLayout->addWidget(textOutput);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Crypto S/W App1", nullptr));
        btnUpload->setText(QCoreApplication::translate("MainWindow", "Upload", nullptr));
        btnProcess->setText(QCoreApplication::translate("MainWindow", "Process", nullptr));
        btnDownload->setText(QCoreApplication::translate("MainWindow", "Download", nullptr));
        lblStatus->setText(QCoreApplication::translate("MainWindow", "Status: Idle", nullptr));
        textOutput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Output will appear here...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
