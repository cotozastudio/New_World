#include"CGame.hpp"

void CGame::Run()
{
    sf::RenderWindow okno_glowne(sf::VideoMode(600,400),"New World");
    ZmienRozdzielczosc(m_okno_szerokosc,m_okno_wysokosc);
    okno_glowne.setFramerateLimit(60);

    is_done=false;
    sf::Clock zegar_aktualizacji;
    sf::Time czas=zegar_aktualizacji.getElapsedTime();
    while(!is_done)
    {
        CGame::ObslugaZdarzen();
        czas=zegar_aktualizacji.getElapsedTime();
        if(czas.asMilliseconds>0)
        {
            Aktualizuj(czas.asMilliseconds());
        }
        Rysuj();
    }
    okno_glowne.close();
};
