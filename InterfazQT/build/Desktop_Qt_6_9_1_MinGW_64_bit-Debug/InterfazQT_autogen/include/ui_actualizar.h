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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Actualizar
{
public:
    QGridLayout *gridLayout;
    QListView *listView;
    QLabel *label;
    QLineEdit *txtActualizar;
    QPushButton *btnActualizar_D;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Actualizar)
    {
        if (Actualizar->objectName().isEmpty())
            Actualizar->setObjectName("Actualizar");
        Actualizar->resize(634, 363);
        gridLayout = new QGridLayout(Actualizar);
        gridLayout->setObjectName("gridLayout");
        listView = new QListView(Actualizar);
        listView->setObjectName("listView");

        gridLayout->addWidget(listView, 2, 0, 1, 1);

        label = new QLabel(Actualizar);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txtActualizar = new QLineEdit(Actualizar);
        txtActualizar->setObjectName("txtActualizar");

        gridLayout->addWidget(txtActualizar, 1, 0, 1, 1);

        btnActualizar_D = new QPushButton(Actualizar);
        btnActualizar_D->setObjectName("btnActualizar_D");

        gridLayout->addWidget(btnActualizar_D, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Actualizar);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 1);


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
