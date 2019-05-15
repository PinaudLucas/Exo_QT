#ifndef ADRESSEIPV4_H   //protège les inclusions multiples
#define ADRESSEIPV4_H
#include <QtMath>

/**
 * @brief The AdresseIPv4 class
 * @version 1.1
 * @author Pinaud_Lucas
 * @date 14/05/2019
 */

class AdresseIPv4
{
public:
    AdresseIPv4(quint8 _adresse[], quint8 _suffixe);
    void ObtenirAdresseReseau(quint8 _adresseReseau[]);
    void ObtenirPremierAdresse(quint8 _premiereAdresse[]);
    void ObtenirDerniereAdresse(quint8 _derniereAdresse[]);
    void ObtenirAdresseDiffusion(quint8 _adresseDiffusion[]);

private:
    void CalculerMasque();
    quint8 adresse[4];      ///on masque l'adresse en 32 bits
    quint8 masque[4];       ///on masque le masque en 32 bits
    quint8 suffixe;
};

#endif // ADRESSEIPV4_H
