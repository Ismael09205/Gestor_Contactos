#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "mostrar_contactos.h"
#include <Qfile>
#include <QTextStream>
#include <QMessageBox>
#include<QIntValidator>

struct info_contactos{
    QString nombre;
    QString apellido;
    int celular;
    QString correo;
    QString direccion;
    QString nickname;
    QString cumpl;
};
QVector<info_contactos> contactos;
info_contactos c;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionCrear_triggered()
{


}


void MainWindow::on_actionActualizar_triggered()
{
    Actualizar *actualizarVentana = new Actualizar(this);
    actualizarVentana->setModal(true);
    actualizarVentana->show();
}



void MainWindow::on_actionEliminar_triggered()
{
    Eliminar *eliminarContacto= new Eliminar(this);
    eliminarContacto->show();



}


void MainWindow::on_btnGuardar_clicked()
{
    bool num;
    c.nombre=ui->txtNombre->text();
    c.apellido=ui->txtApellido->text();
    c.nickname=ui->txtApodo->text();
    QString celular_texto=ui->txtCelular->text();
    c.celular=celular_texto.toInt(&num);
    c.correo=ui->txtCorreo->text();
    c.direccion=ui->txtDireccion->text();
    c.cumpl=ui->dateEdit->date().toString();




    if(c.nombre.isEmpty() || c.apellido.isEmpty() || c.nickname.isEmpty() ||
        celular_texto.isEmpty() || c.correo.isEmpty() || c.direccion.isEmpty() || c.cumpl.isEmpty())
    {
        QMessageBox::warning(this, "ERROR","Por favor ingrese los datos correctamente, uno o mas campos vacios");

    }
    else{
        if(!num || celular_texto.isEmpty()){
            QMessageBox::critical(this,"ERROR","Solo se pueden ingresar numeros");
            ui->txtCelular->clear();
            ui->txtCelular->setFocus();
        }else{
            QFile archivo("lista_contactos.txt");
            if (!archivo.open(QIODevice::Append|QIODevice::Text)){
                QMessageBox::warning(this,"ERROR","No se pudo abrir el archivo");
                return;
            }
            QTextStream guardar(&archivo);
            guardar<<c.nombre<<"|"<<c.apellido<<"|"<<c.nickname<<"|"<<c.celular<<"|"<<c.correo<<"|"<<c.direccion<<"|"<<c.cumpl<<"|"<<"\n";
            archivo.close();
            QMessageBox::information(this,"Exito","Datos guardados correctamente");
            ui->txtNombre->clear();
            ui->txtNombre->setFocus();
            ui->txtApodo->clear();
            ui->txtCelular->clear();
            ui->txtCorreo->clear();
            ui->txtDireccion->clear();
            ui->txtApellido->clear();
        }


    }
}


void MainWindow::on_actionMostrar_Contactos_triggered()
{
    mostrar_contactos *ventana = new mostrar_contactos(this);
    ventana->exec();
}

