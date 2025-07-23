/********************************************************************************
** Form generated from reading UI file 'menu_actualizar.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_ACTUALIZAR_H
#define UI_MENU_ACTUALIZAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menu_Actualizar
{
public:
    QLineEdit *txtApellido;
    QLineEdit *txtApodo;
    QLineEdit *txtCorreo;
    QLabel *labelApellido_2;
    QLabel *labelApellido_4;
    QLabel *labelApellido;
    QLineEdit *txtDireccion;
    QLabel *labelApellido_5;
    QLineEdit *txtNombre;
    QLabel *labelApellido_3;
    QLabel *label;
    QLineEdit *txtCelular;
    QLabel *label_2;
    QPushButton *btnActualizar_menu;

    void setupUi(QDialog *menu_Actualizar)
    {
        if (menu_Actualizar->objectName().isEmpty())
            menu_Actualizar->setObjectName("menu_Actualizar");
        menu_Actualizar->resize(768, 275);
        txtApellido = new QLineEdit(menu_Actualizar);
        txtApellido->setObjectName("txtApellido");
        txtApellido->setGeometry(QRect(130, 120, 113, 24));
        txtApodo = new QLineEdit(menu_Actualizar);
        txtApodo->setObjectName("txtApodo");
        txtApodo->setGeometry(QRect(590, 120, 113, 24));
        txtCorreo = new QLineEdit(menu_Actualizar);
        txtCorreo->setObjectName("txtCorreo");
        txtCorreo->setGeometry(QRect(360, 120, 113, 24));
        labelApellido_2 = new QLabel(menu_Actualizar);
        labelApellido_2->setObjectName("labelApellido_2");
        labelApellido_2->setGeometry(QRect(290, 50, 91, 31));
        labelApellido_4 = new QLabel(menu_Actualizar);
        labelApellido_4->setObjectName("labelApellido_4");
        labelApellido_4->setGeometry(QRect(520, 50, 91, 31));
        labelApellido = new QLabel(menu_Actualizar);
        labelApellido->setObjectName("labelApellido");
        labelApellido->setGeometry(QRect(50, 120, 91, 31));
        txtDireccion = new QLineEdit(menu_Actualizar);
        txtDireccion->setObjectName("txtDireccion");
        txtDireccion->setGeometry(QRect(590, 50, 113, 24));
        labelApellido_5 = new QLabel(menu_Actualizar);
        labelApellido_5->setObjectName("labelApellido_5");
        labelApellido_5->setGeometry(QRect(520, 120, 91, 31));
        txtNombre = new QLineEdit(menu_Actualizar);
        txtNombre->setObjectName("txtNombre");
        txtNombre->setGeometry(QRect(130, 50, 113, 24));
        labelApellido_3 = new QLabel(menu_Actualizar);
        labelApellido_3->setObjectName("labelApellido_3");
        labelApellido_3->setGeometry(QRect(290, 120, 91, 31));
        label = new QLabel(menu_Actualizar);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 50, 91, 31));
        txtCelular = new QLineEdit(menu_Actualizar);
        txtCelular->setObjectName("txtCelular");
        txtCelular->setGeometry(QRect(360, 50, 113, 24));
        label_2 = new QLabel(menu_Actualizar);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 131, 31));
        btnActualizar_menu = new QPushButton(menu_Actualizar);
        btnActualizar_menu->setObjectName("btnActualizar_menu");
        btnActualizar_menu->setGeometry(QRect(300, 190, 141, 41));

        retranslateUi(menu_Actualizar);

        QMetaObject::connectSlotsByName(menu_Actualizar);
    } // setupUi

    void retranslateUi(QDialog *menu_Actualizar)
    {
        menu_Actualizar->setWindowTitle(QCoreApplication::translate("menu_Actualizar", "Dialog", nullptr));
        labelApellido_2->setText(QCoreApplication::translate("menu_Actualizar", "Celular:", nullptr));
        labelApellido_4->setText(QCoreApplication::translate("menu_Actualizar", "Direccion:", nullptr));
        labelApellido->setText(QCoreApplication::translate("menu_Actualizar", "Apellido:", nullptr));
        labelApellido_5->setText(QCoreApplication::translate("menu_Actualizar", "Apodo:", nullptr));
        labelApellido_3->setText(QCoreApplication::translate("menu_Actualizar", "Correo:", nullptr));
        label->setText(QCoreApplication::translate("menu_Actualizar", "Nombre:", nullptr));
        label_2->setText(QCoreApplication::translate("menu_Actualizar", "Menu de Actualizacion", nullptr));
        btnActualizar_menu->setText(QCoreApplication::translate("menu_Actualizar", "Actualizar contacto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu_Actualizar: public Ui_menu_Actualizar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_ACTUALIZAR_H
