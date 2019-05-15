#ifndef CALCULATRICEIP_H
#define CALCULATRICEIP_H

/**
 * @brief The AdresseIPv4 class
 * @version 1.1
 * @author Pinaud_Lucas
 * @date 14/05/2019
 */

#include <QMainWindow>

namespace Ui {
class CalculatriceIP;
}

class CalculatriceIP : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalculatriceIP(QWidget *parent = 0);
    ~CalculatriceIP();
    QString ConvertirTabOctetEnQString(const quint8 tabOctet[]);

private slots:
    void on_pushButtonCalculer_clicked();


    void on_pushButtonPropos_clicked();

private:
    Ui::CalculatriceIP *ui;
};

#endif // CALCULATRICEIP_H
