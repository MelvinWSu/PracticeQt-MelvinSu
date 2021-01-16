#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPushButton button;
    button.setText("Text Inside Button");
    button.setToolTip("Hover over text");
    button.show();

    QFont font("Courier");
    button.setFont(font);

    QIcon icon ("C:/Windows/System32/Snooze_80.png");
    button.setIcon(icon);

    return a.exec();
}
