#include "fenprincipale.h"
#include "fencodegenere.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    FenPrincipale w;
    w.show();

    return a.exec();
}
