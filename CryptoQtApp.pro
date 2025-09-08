QT += core gui widgets network
CONFIG += c++17 console

SOURCES += main.cpp \
           mainwindow.cpp

HEADERS += mainwindow.h

FORMS += mainwindow.ui

# Link Crypto++
LIBS += -lcryptopp

