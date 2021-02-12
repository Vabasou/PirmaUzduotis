#include <iostream>


int main()
{
    setlocale(LC_ALL, "Lithuanian");
    std::string vardas;
    std::string pirmaEilute, antraEilute, treciaEilute, ketvirtaEilute, penktaEilute;

    std::cout << "Iveskite Varda" << std::endl;
    std::cin >> vardas;

    std::string paskutineRaide;
    
    if (vardas.back() == 'e' || vardas.back() == 'a')
    {
        treciaEilute = "* Sveika, " + vardas + "! *";
    }
    else
    treciaEilute = "* Sveikas, " + vardas + "! *";

    int ilgis = treciaEilute.length();

    for (int i = 0; i < ilgis; i++)
    {
        pirmaEilute += "*";
        penktaEilute += "*";
    }

    antraEilute = "*";
    ketvirtaEilute = "*";

    for (int i = 0; i < ilgis - 2; i++)             
    {
        antraEilute += " ";
        ketvirtaEilute += " ";
    }
    antraEilute += "*";
    ketvirtaEilute += "*";

    std::cout << pirmaEilute << std::endl;
    std::cout << antraEilute << std::endl;
    std::cout << treciaEilute << std::endl;
    std::cout << ketvirtaEilute << std::endl;
    std::cout << penktaEilute << std::endl;
}