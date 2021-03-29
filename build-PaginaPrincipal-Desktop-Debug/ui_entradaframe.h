/********************************************************************************
** Form generated from reading UI file 'entradaframe.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRADAFRAME_H
#define UI_ENTRADAFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_entradaFrame
{
public:
    QWidget *centralwidget;
    QLineEdit *instructionInput;
    QPushButton *execute;
    QTextEdit *instructionText;
    QMenuBar *menubar;
    QMenu *menuModo_Testo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *entradaFrame)
    {
        if (entradaFrame->objectName().isEmpty())
            entradaFrame->setObjectName(QString::fromUtf8("entradaFrame"));
        entradaFrame->resize(819, 431);
        centralwidget = new QWidget(entradaFrame);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        instructionInput = new QLineEdit(centralwidget);
        instructionInput->setObjectName(QString::fromUtf8("instructionInput"));
        instructionInput->setGeometry(QRect(10, 320, 661, 41));
        instructionInput->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);\n"
"color: rgb(23, 18, 18);\n"
"font: 11pt \"Noto Sans\";\n"
"border: 2px;"));
        instructionInput->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        execute = new QPushButton(centralwidget);
        execute->setObjectName(QString::fromUtf8("execute"));
        execute->setGeometry(QRect(690, 320, 91, 41));
        execute->setStyleSheet(QString::fromUtf8("font: 11pt \"Noto Sans\";"));
        instructionText = new QTextEdit(centralwidget);
        instructionText->setObjectName(QString::fromUtf8("instructionText"));
        instructionText->setGeometry(QRect(10, 20, 771, 291));
        instructionText->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);\n"
"color: rgb(23, 18, 18);\n"
"font: 11pt \"Noto Sans\";\n"
"border: 2px;"));
        instructionText->setReadOnly(true);
        entradaFrame->setCentralWidget(centralwidget);
        menubar = new QMenuBar(entradaFrame);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 819, 22));
        menuModo_Testo = new QMenu(menubar);
        menuModo_Testo->setObjectName(QString::fromUtf8("menuModo_Testo"));
        entradaFrame->setMenuBar(menubar);
        statusbar = new QStatusBar(entradaFrame);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        entradaFrame->setStatusBar(statusbar);

        menubar->addAction(menuModo_Testo->menuAction());

        retranslateUi(entradaFrame);

        QMetaObject::connectSlotsByName(entradaFrame);
    } // setupUi

    void retranslateUi(QMainWindow *entradaFrame)
    {
        entradaFrame->setWindowTitle(QCoreApplication::translate("entradaFrame", "MainWindow", nullptr));
#if QT_CONFIG(whatsthis)
        instructionInput->setWhatsThis(QCoreApplication::translate("entradaFrame", "<html><head/><body><p>zxcv</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        instructionInput->setText(QString());
        execute->setText(QCoreApplication::translate("entradaFrame", "Ejecutar", nullptr));
        menuModo_Testo->setTitle(QCoreApplication::translate("entradaFrame", "Modo Texto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class entradaFrame: public Ui_entradaFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRADAFRAME_H
