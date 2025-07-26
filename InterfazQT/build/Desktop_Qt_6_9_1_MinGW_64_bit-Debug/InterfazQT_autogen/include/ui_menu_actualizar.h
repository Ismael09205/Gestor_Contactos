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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menu_Actualizar
{
public:
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *txtNombre;
    QLabel *labelApellido;
    QLabel *labelApellido_2;
    QLineEdit *txtCelular;
    QLineEdit *txtApellido;
    QLabel *labelApellido_3;
    QLabel *labelApellido_4;
    QLabel *labelApellido_5;
    QLineEdit *txtDireccion;
    QLineEdit *txtCorreo;
    QLineEdit *txtApodo;
    QPushButton *btnActualizar_menu;

    void setupUi(QDialog *menu_Actualizar)
    {
        if (menu_Actualizar->objectName().isEmpty())
            menu_Actualizar->setObjectName("menu_Actualizar");
        menu_Actualizar->resize(930, 280);
        formLayout = new QFormLayout(menu_Actualizar);
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(menu_Actualizar);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::ItemRole::SpanningRole, label_2);

        label = new QLabel(menu_Actualizar);
        label->setObjectName("label");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label);

        txtNombre = new QLineEdit(menu_Actualizar);
        txtNombre->setObjectName("txtNombre");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, txtNombre);

        labelApellido = new QLabel(menu_Actualizar);
        labelApellido->setObjectName("labelApellido");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, labelApellido);

        labelApellido_2 = new QLabel(menu_Actualizar);
        labelApellido_2->setObjectName("labelApellido_2");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, labelApellido_2);

        txtCelular = new QLineEdit(menu_Actualizar);
        txtCelular->setObjectName("txtCelular");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, txtCelular);

        txtApellido = new QLineEdit(menu_Actualizar);
        txtApellido->setObjectName("txtApellido");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, txtApellido);

        labelApellido_3 = new QLabel(menu_Actualizar);
        labelApellido_3->setObjectName("labelApellido_3");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, labelApellido_3);

        labelApellido_4 = new QLabel(menu_Actualizar);
        labelApellido_4->setObjectName("labelApellido_4");

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, labelApellido_4);

        labelApellido_5 = new QLabel(menu_Actualizar);
        labelApellido_5->setObjectName("labelApellido_5");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, labelApellido_5);

        txtDireccion = new QLineEdit(menu_Actualizar);
        txtDireccion->setObjectName("txtDireccion");

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, txtDireccion);

        txtCorreo = new QLineEdit(menu_Actualizar);
        txtCorreo->setObjectName("txtCorreo");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, txtCorreo);

        txtApodo = new QLineEdit(menu_Actualizar);
        txtApodo->setObjectName("txtApodo");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, txtApodo);

        btnActualizar_menu = new QPushButton(menu_Actualizar);
        btnActualizar_menu->setObjectName("btnActualizar_menu");

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, btnActualizar_menu);

        QWidget::setTabOrder(txtNombre, txtApellido);
        QWidget::setTabOrder(txtApellido, txtCelular);
        QWidget::setTabOrder(txtCelular, txtCorreo);
        QWidget::setTabOrder(txtCorreo, txtApodo);
        QWidget::setTabOrder(txtApodo, txtDireccion);
        QWidget::setTabOrder(txtDireccion, btnActualizar_menu);

        retranslateUi(menu_Actualizar);

        QMetaObject::connectSlotsByName(menu_Actualizar);
    } // setupUi

    void retranslateUi(QDialog *menu_Actualizar)
    {
        menu_Actualizar->setWindowTitle(QCoreApplication::translate("menu_Actualizar", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("menu_Actualizar", "Menu de Actualizacion", nullptr));
        label->setText(QCoreApplication::translate("menu_Actualizar", "Nombre:", nullptr));
        labelApellido->setText(QCoreApplication::translate("menu_Actualizar", "Apellido:", nullptr));
        labelApellido_2->setText(QCoreApplication::translate("menu_Actualizar", "Celular:", nullptr));
        labelApellido_3->setText(QCoreApplication::translate("menu_Actualizar", "Correo:", nullptr));
        labelApellido_4->setText(QCoreApplication::translate("menu_Actualizar", "Direccion:", nullptr));
        labelApellido_5->setText(QCoreApplication::translate("menu_Actualizar", "Apodo:", nullptr));
        btnActualizar_menu->setText(QCoreApplication::translate("menu_Actualizar", "Actualizar contacto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu_Actualizar: public Ui_menu_Actualizar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_ACTUALIZAR_H
