#include <iostream>


int main()
{
    setlocale(LC_ALL, "Lithuanian");
    std::string vardas;
    int aukstis;

    std::cout << "Iveskite Varda" << std::endl;
    std::cin >> vardas;

    std::cout << "Iveskite norima remelio auksti" << std::endl;
    std::cin >> aukstis;
    std::string* eilutes = new std::string[aukstis+1];

    if (aukstis < 5)
    {
        std::cout << "Auktis per mazas, iveskite didesni auksti: " << std::endl;
        std::cin >> aukstis;
    }

    int vidurys = aukstis / 2;
    
    if (vardas.back() == 'e' || vardas.back() == 'a')
    {
        eilutes[vidurys] = "* Sveika, " + vardas + "! *";
    }
    else
    {
        eilutes[vidurys] = "* Sveikas, " + vardas + "! *";
    }

    int ilgis = eilutes[vidurys].length();
  
        for (int i = 0; i < ilgis; i++)
        {
            eilutes[0] += "*";
            eilutes[aukstis-1] += "*";
        }

        for (int i = 1; i < vidurys; i++)
        {
            eilutes[i] += "*";
            for (int j = 0; j < ilgis - 2; j++)
                eilutes[i] += " ";
            eilutes[i] += "*";
        }

        for (int i = vidurys + 1; i < aukstis-1; i++)
        {
            eilutes[i] += "*";
            for (int j = 0; j < ilgis - 2; j++)
                eilutes[i] += " ";
            eilutes[i] += "*";
        }

        for (int i = 0; i < aukstis+1; i++)
        {
            std::cout << eilutes[i] << std::endl;
        }
    
    delete[] eilutes;

}
