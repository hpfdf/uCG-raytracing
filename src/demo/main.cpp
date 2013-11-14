#include <QApplication>
#include <QtWidgets>
#include <cg.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    (new QTextEdit("Hello World!"))->show();
    return app.exec();
}
