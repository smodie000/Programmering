#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()),this, SLOT(GrisRosa()));
}

//private slots
        void MainWindow:: GrisRosa()
        {

            ui->lineEdit->setText("Hello guys");
        }

MainWindow::~MainWindow()
{
    delete ui;
}
