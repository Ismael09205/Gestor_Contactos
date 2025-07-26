/********************************************************************************
** Form generated from reading UI file 'mostrar_contactos.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRAR_CONTACTOS_H
#define UI_MOSTRAR_CONTACTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_mostrar_contactos
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QTableWidget *tablaContactos;

    void setupUi(QDialog *mostrar_contactos)
    {
        if (mostrar_contactos->objectName().isEmpty())
            mostrar_contactos->setObjectName("mostrar_contactos");
        mostrar_contactos->resize(737, 300);
        pushButton = new QPushButton(mostrar_contactos);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 260, 75, 24));
        label = new QLabel(mostrar_contactos);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 101, 16));
        tablaContactos = new QTableWidget(mostrar_contactos);
        if (tablaContactos->columnCount() < 7)
            tablaContactos->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablaContactos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablaContactos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablaContactos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablaContactos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablaContactos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tablaContactos->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tablaContactos->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tablaContactos->setObjectName("tablaContactos");
        tablaContactos->setGeometry(QRect(30, 60, 681, 192));

        retranslateUi(mostrar_contactos);

        QMetaObject::connectSlotsByName(mostrar_contactos);
    } // setupUi

    void retranslateUi(QDialog *mostrar_contactos)
    {
        mostrar_contactos->setWindowTitle(QCoreApplication::translate("mostrar_contactos", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("mostrar_contactos", "Salir", nullptr));
        label->setText(QCoreApplication::translate("mostrar_contactos", "Lista de Contactos", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablaContactos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("mostrar_contactos", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablaContactos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("mostrar_contactos", "Apellido", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablaContactos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("mostrar_contactos", "Apodo", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablaContactos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("mostrar_contactos", "Celular", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablaContactos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("mostrar_contactos", "Correo", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tablaContactos->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("mostrar_contactos", "Direcci\303\263n", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tablaContactos->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("mostrar_contactos", "Cumplea\303\261os", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mostrar_contactos: public Ui_mostrar_contactos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRAR_CONTACTOS_H
