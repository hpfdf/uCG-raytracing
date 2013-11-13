#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    std::cout << "hello world\n" << std::endl;
    //exit(0);
    return app.exec();
}
