/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLabelActu;
    QAction *actionActualizar;
    QAction *actionEliminar;
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *txtNombre;
    QLabel *labelApellido;
    QLineEdit *txtApellido;
    QLabel *labelApellido_2;
    QLabel *labelApellido_3;
    QLineEdit *txtCelular;
    QLineEdit *txtCorreo;
    QLabel *labelApellido_4;
    QLabel *labelApellido_5;
    QLineEdit *txtDireccion;
    QLineEdit *txtApodo;
    QLabel *labelApellido_6;
    QDateEdit *dateEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menuOpcion;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(759, 269);
        actionLabelActu = new QAction(MainWindow);
        actionLabelActu->setObjectName("actionLabelActu");
        actionActualizar = new QAction(MainWindow);
        actionActualizar->setObjectName("actionActualizar");
        actionEliminar = new QAction(MainWindow);
        actionEliminar->setObjectName("actionEliminar");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 40, 91, 31));
        txtNombre = new QLineEdit(centralwidget);
        txtNombre->setObjectName("txtNombre");
        txtNombre->setGeometry(QRect(140, 40, 113, 24));
        labelApellido = new QLabel(centralwidget);
        labelApellido->setObjectName("labelApellido");
        labelApellido->setGeometry(QRect(60, 110, 91, 31));
        txtApellido = new QLineEdit(centralwidget);
        txtApellido->setObjectName("txtApellido");
        txtApellido->setGeometry(QRect(140, 110, 113, 24));
        labelApellido_2 = new QLabel(centralwidget);
        labelApellido_2->setObjectName("labelApellido_2");
        labelApellido_2->setGeometry(QRect(300, 40, 91, 31));
        labelApellido_3 = new QLabel(centralwidget);
        labelApellido_3->setObjectName("labelApellido_3");
        labelApellido_3->setGeometry(QRect(300, 110, 91, 31));
        txtCelular = new QLineEdit(centralwidget);
        txtCelular->setObjectName("txtCelular");
        txtCelular->setGeometry(QRect(370, 40, 113, 24));
        txtCorreo = new QLineEdit(centralwidget);
        txtCorreo->setObjectName("txtCorreo");
        txtCorreo->setGeometry(QRect(370, 110, 113, 24));
        labelApellido_4 = new QLabel(centralwidget);
        labelApellido_4->setObjectName("labelApellido_4");
        labelApellido_4->setGeometry(QRect(530, 40, 91, 31));
        labelApellido_5 = new QLabel(centralwidget);
        labelApellido_5->setObjectName("labelApellido_5");
        labelApellido_5->setGeometry(QRect(530, 110, 91, 31));
        txtDireccion = new QLineEdit(centralwidget);
        txtDireccion->setObjectName("txtDireccion");
        txtDireccion->setGeometry(QRect(600, 40, 113, 24));
        txtApodo = new QLineEdit(centralwidget);
        txtApodo->setObjectName("txtApodo");
        txtApodo->setGeometry(QRect(600, 110, 113, 24));
        labelApellido_6 = new QLabel(centralwidget);
        labelApellido_6->setObjectName("labelApellido_6");
        labelApellido_6->setGeometry(QRect(50, 170, 91, 31));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(140, 170, 110, 25));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(410, 170, 141, 24));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 141, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 759, 21));
        menuOpcion = new QMenu(menubar);
        menuOpcion->setObjectName("menuOpcion");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuOpcion->menuAction());
        menuOpcion->addAction(actionActualizar);
        menuOpcion->addAction(actionEliminar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLabelActu->setText(QCoreApplication::translate("MainWindow", "LabelActu", nullptr));
        actionActualizar->setText(QCoreApplication::translate("MainWindow", "Actualizar", nullptr));
        actionEliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nombre:", nullptr));
        labelApellido->setText(QCoreApplication::translate("MainWindow", "Apellido:", nullptr));
        labelApellido_2->setText(QCoreApplication::translate("MainWindow", "Celular:", nullptr));
        labelApellido_3->setText(QCoreApplication::translate("MainWindow", "Correo:", nullptr));
        labelApellido_4->setText(QCoreApplication::translate("MainWindow", "Direccion:", nullptr));
        labelApellido_5->setText(QCoreApplication::translate("MainWindow", "Apodo:", nullptr));
        labelApellido_6->setText(QCoreApplication::translate("MainWindow", "Cumplea\303\261os:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Guardar Contacto", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Crear un nuevo contacto", nullptr));
        menuOpcion->setTitle(QCoreApplication::translate("MainWindow", "Opciones", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
