#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

