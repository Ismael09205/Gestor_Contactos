/********************************************************************************
** Form generated from reading UI file 'actualizar.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTUALIZAR_H
#define UI_ACTUALIZAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Actualizar
{
public:
    QDialogButtonBox *buttonBox;
    QListView *listView;
    QLabel *label;
    QLineEdit *txtActualizar;
    QPushButton *btnActualizar_D;

    void setupUi(QDialog *Actualizar)
    {
        if (Actualizar->objectName().isEmpty())
            Actualizar->setObjectName("Actualizar");
        Actualizar->resize(539, 363);
        buttonBox = new QDialogButtonBox(Actualizar);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(170, 320, 281, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        listView = new QListView(Actualizar);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(30, 100, 461, 192));
        label = new QLabel(Actualizar);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 20, 231, 21));
        txtActualizar = new QLineEdit(Actualizar);
        txtActualizar->setObjectName("txtActualizar");
        txtActualizar->setGeometry(QRect(170, 50, 171, 24));
        btnActualizar_D = new QPushButton(Actualizar);
        btnActualizar_D->setObjectName("btnActualizar_D");
        btnActualizar_D->setGeometry(QRect(360, 50, 80, 24));

        retranslateUi(Actualizar);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Actualizar, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Actualizar, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Actualizar);
    } // setupUi

    void retranslateUi(QDialog *Actualizar)
    {
        Actualizar->setWindowTitle(QCoreApplication::translate("Actualizar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Actualizar", "Ingrese el nombre del contacto a Actualizar", nullptr));
        btnActualizar_D->setText(QCoreApplication::translate("Actualizar", "Actualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Actualizar: public Ui_Actualizar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTUALIZAR_H
