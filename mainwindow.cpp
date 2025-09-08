#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cryptohelper.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>

QString currentFilePath;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btnUpload, &QPushButton::clicked, this, &MainWindow::onUpload);
    connect(ui->btnProcess, &QPushButton::clicked, this, &MainWindow::onProcess);
    connect(ui->btnDownload, &QPushButton::clicked, this, &MainWindow::onDownload);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::onUpload() {
    QString filePath = QFileDialog::getOpenFileName(this, "Select File");
    if (!filePath.isEmpty()) {
        currentFilePath = filePath;
        QFile file(filePath);
        if (file.open(QIODevice::ReadOnly)) {
            ui->textOutput->setPlainText(file.readAll());
            ui->lblStatus->setText("File loaded.");
        }
    }
}

void MainWindow::onProcess() {
    QString input = ui->textOutput->toPlainText();
    if (input.isEmpty()) {
        QMessageBox::warning(this, "Error", "No input data!");
        return;
    }

    // Example: SHA-256
    std::string result = CryptoHelper::sha256(input.toStdString());
    ui->textOutput->setPlainText(QString::fromStdString(result));
    ui->lblStatus->setText("SHA-256 digest generated.");
}

void MainWindow::onDownload() {
    QString filePath = QFileDialog::getSaveFileName(this, "Save File");
    if (!filePath.isEmpty()) {
        QFile file(filePath);
        if (file.open(QIODevice::WriteOnly)) {
            file.write(ui->textOutput->toPlainText().toUtf8());
            ui->lblStatus->setText("File saved.");
        }
    }
}

