#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>

#include <cryptopp/sha.h>
#include <cryptopp/hex.h>
#include <cryptopp/filters.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;
    w.show();

    std::string msg = "Hello from Qt + Crypto++ (Linux)";
    std::string digest;

    CryptoPP::SHA256 hash;
    CryptoPP::StringSource s(msg, true,
        new CryptoPP::HashFilter(hash,
            new CryptoPP::HexEncoder(
                new CryptoPP::StringSink(digest))));

    QMessageBox::information(nullptr, "SHA256", QString::fromStdString(digest));

    return app.exec();
}

