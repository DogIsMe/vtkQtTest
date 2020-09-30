/********************************************************************************
** Form generated from reading UI file 'vtkQtshow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VTKQTSHOW_H
#define UI_VTKQTSHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vtkQtshowClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *vtkQtshowClass)
    {
        if (vtkQtshowClass->objectName().isEmpty())
            vtkQtshowClass->setObjectName(QString::fromUtf8("vtkQtshowClass"));
        vtkQtshowClass->resize(600, 400);
        menuBar = new QMenuBar(vtkQtshowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        vtkQtshowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(vtkQtshowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        vtkQtshowClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(vtkQtshowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        vtkQtshowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(vtkQtshowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        vtkQtshowClass->setStatusBar(statusBar);

        retranslateUi(vtkQtshowClass);

        QMetaObject::connectSlotsByName(vtkQtshowClass);
    } // setupUi

    void retranslateUi(QMainWindow *vtkQtshowClass)
    {
        vtkQtshowClass->setWindowTitle(QApplication::translate("vtkQtshowClass", "vtkQtshow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vtkQtshowClass: public Ui_vtkQtshowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VTKQTSHOW_H
