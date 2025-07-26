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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
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
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *txtNombre;
    QLabel *labelApellido;
    QLineEdit *txtApellido;
    QFrame *line_2;
    QLabel *labelApellido_3;
    QLineEdit *txtCorreo;
    QFrame *line_3;
    QLabel *labelApellido_4;
    QLineEdit *txtDireccion;
    QFrame *line_4;
    QLabel *labelApellido_2;
    QLineEdit *txtCelular;
    QFrame *line_5;
    QLabel *labelApellido_5;
    QLineEdit *txtApodo;
    QFrame *line_6;
    QLabel *labelApellido_6;
    QDateEdit *dateEdit;
    QPushButton *btnGuardar;
    QFrame *line;
    QMenuBar *menubar;
    QMenu *menuOpcion;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(677, 365);
        actionLabelActu = new QAction(MainWindow);
        actionLabelActu->setObjectName("actionLabelActu");
        actionActualizar = new QAction(MainWindow);
        actionActualizar->setObjectName("actionActualizar");
        actionEliminar = new QAction(MainWindow);
        actionEliminar->setObjectName("actionEliminar");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::ItemRole::SpanningRole, label_2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label);

        txtNombre = new QLineEdit(centralwidget);
        txtNombre->setObjectName("txtNombre");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, txtNombre);

        labelApellido = new QLabel(centralwidget);
        labelApellido->setObjectName("labelApellido");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, labelApellido);

        txtApellido = new QLineEdit(centralwidget);
        txtApellido->setObjectName("txtApellido");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, txtApellido);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, line_2);

        labelApellido_3 = new QLabel(centralwidget);
        labelApellido_3->setObjectName("labelApellido_3");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, labelApellido_3);

        txtCorreo = new QLineEdit(centralwidget);
        txtCorreo->setObjectName("txtCorreo");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, txtCorreo);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, line_3);

        labelApellido_4 = new QLabel(centralwidget);
        labelApellido_4->setObjectName("labelApellido_4");

        formLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, labelApellido_4);

        txtDireccion = new QLineEdit(centralwidget);
        txtDireccion->setObjectName("txtDireccion");

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, txtDireccion);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout->setWidget(8, QFormLayout::ItemRole::FieldRole, line_4);

        labelApellido_2 = new QLabel(centralwidget);
        labelApellido_2->setObjectName("labelApellido_2");

        formLayout->setWidget(9, QFormLayout::ItemRole::LabelRole, labelApellido_2);

        txtCelular = new QLineEdit(centralwidget);
        txtCelular->setObjectName("txtCelular");

        formLayout->setWidget(9, QFormLayout::ItemRole::FieldRole, txtCelular);

        line_5 = new QFrame(centralwidget);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout->setWidget(10, QFormLayout::ItemRole::FieldRole, line_5);

        labelApellido_5 = new QLabel(centralwidget);
        labelApellido_5->setObjectName("labelApellido_5");

        formLayout->setWidget(11, QFormLayout::ItemRole::LabelRole, labelApellido_5);

        txtApodo = new QLineEdit(centralwidget);
        txtApodo->setObjectName("txtApodo");

        formLayout->setWidget(11, QFormLayout::ItemRole::FieldRole, txtApodo);

        line_6 = new QFrame(centralwidget);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::Shape::HLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout->setWidget(12, QFormLayout::ItemRole::FieldRole, line_6);

        labelApellido_6 = new QLabel(centralwidget);
        labelApellido_6->setObjectName("labelApellido_6");

        formLayout->setWidget(13, QFormLayout::ItemRole::LabelRole, labelApellido_6);

        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName("dateEdit");

        formLayout->setWidget(13, QFormLayout::ItemRole::FieldRole, dateEdit);

        btnGuardar = new QPushButton(centralwidget);
        btnGuardar->setObjectName("btnGuardar");

        formLayout->setWidget(14, QFormLayout::ItemRole::FieldRole, btnGuardar);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, line);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 677, 21));
        menuOpcion = new QMenu(menubar);
        menuOpcion->setObjectName("menuOpcion");
        MainWindow->setMenuBar(menubar);
        QWidget::setTabOrder(txtNombre, txtApellido);
        QWidget::setTabOrder(txtApellido, txtCorreo);
        QWidget::setTabOrder(txtCorreo, txtDireccion);
        QWidget::setTabOrder(txtDireccion, txtCelular);
        QWidget::setTabOrder(txtCelular, txtApodo);
        QWidget::setTabOrder(txtApodo, dateEdit);
        QWidget::setTabOrder(dateEdit, btnGuardar);

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
        label_2->setText(QCoreApplication::translate("MainWindow", "Crear un nuevo contacto", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nombre:", nullptr));
        labelApellido->setText(QCoreApplication::translate("MainWindow", "Apellido:", nullptr));
        labelApellido_3->setText(QCoreApplication::translate("MainWindow", "Correo:", nullptr));
        labelApellido_4->setText(QCoreApplication::translate("MainWindow", "Direccion:", nullptr));
        labelApellido_2->setText(QCoreApplication::translate("MainWindow", "Celular:", nullptr));
        labelApellido_5->setText(QCoreApplication::translate("MainWindow", "NickName:", nullptr));
        labelApellido_6->setText(QCoreApplication::translate("MainWindow", "Cumplea\303\261os:", nullptr));
        btnGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar Contacto", nullptr));
        menuOpcion->setTitle(QCoreApplication::translate("MainWindow", "Opciones", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
