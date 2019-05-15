#include "calculatriceip.h"
#include <QApplication>

/**
 * @brief The AdresseIPv4 class
 * @version 1.1
 * @author Pinaud_Lucas
 * @date 14/05/2019
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatriceIP w;
    w.show();

    return a.exec();
}
