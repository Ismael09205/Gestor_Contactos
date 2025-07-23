/********************************************************************************
** Form generated from reading UI file 'eliminar.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINAR_H
#define UI_ELIMINAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_Eliminar
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *listWidget;
    QLabel *label;

    void setupUi(QDialog *Eliminar)
    {
        if (Eliminar->objectName().isEmpty())
            Eliminar->setObjectName("Eliminar");
        Eliminar->resize(556, 347);
        buttonBox = new QDialogButtonBox(Eliminar);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(20, 280, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        listWidget = new QListWidget(Eliminar);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(80, 50, 391, 192));
        label = new QLabel(Eliminar);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 30, 111, 16));

        retranslateUi(Eliminar);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Eliminar, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Eliminar, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Eliminar);
    } // setupUi

    void retranslateUi(QDialog *Eliminar)
    {
        Eliminar->setWindowTitle(QCoreApplication::translate("Eliminar", "Dialog", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("Eliminar", "Luis", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("Eliminar", "Fer", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("Eliminar", "Eliminar contactos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eliminar: public Ui_Eliminar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINAR_H
