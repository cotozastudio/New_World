#include"CGame.hpp"

void CGame::Run()
{
    sf::RenderWindow okno_glowne(sf::VideoMode(600,400),"New World");
    m_okno_glowne=&okno_glowne;
    ZmienRozdzielczosc(m_okno_szerokosc,m_okno_wysokosc);
    okno_glowne.setFramerateLimit(60);

    is_done=false;
    sf::Clock zegar_aktualizacji;
    sf::Time czas=zegar_aktualizacji.getElapsedTime();
    while(!is_done)
    {
        CGame::ObslugaZdarzen();
        czas=zegar_aktualizacji.getElapsedTime();
        if(czas.asMilliseconds()>0)
        {
            Aktualizuj(czas.asMilliseconds());
        }
        Rysuj();

    }
    okno_glowne.close();
}
void CGame::Rysuj()
{
    (*m_okno_glowne).clear(sf::Color(0,125,0,255));
    sf::VertexArray triangle(sf::Triangles,3);
    triangle[0].position=sf::Vector2f(0,200);
    triangle[1].position=sf::Vector2f(600,400);
    triangle[2].position=sf::Vector2f(300,0);
    (*m_okno_glowne).draw(triangle);

    (*m_okno_glowne).display();
}
void CGame::ObslugaZdarzen()
{
    if(is_done){return;}
    sf::Event zdarzenie;
    while((*m_okno_glowne).pollEvent(zdarzenie))
    {
        if(zdarzenie.type==sf::Event::Closed)
        {
            is_done=true;
            (*m_okno_glowne).close();
            break;
        }else if (zdarzenie.type == sf::Event::Resized)
        {
         ZmienRozdzielczosc(zdarzenie.size.width, zdarzenie.size.height);
        }
    }
}
void CGame::ZmienRozdzielczosc(size_t szerokosc,size_t wysokosc)
{
    (*m_okno_glowne).setSize(sf::Vector2u(szerokosc,wysokosc));
    (*m_okno_glowne).create(sf::VideoMode(szerokosc,wysokosc),"New World");
}
CGame::CGame(size_t okno_szerokosc,size_t okno_wysokosc,bool fullscreen)
{
    m_okno_szerokosc=okno_szerokosc;
    m_okno_wysokosc=okno_wysokosc;
    m_fullscreen=fullscreen;
}
CGame::~CGame(){}

void CGame::Aktualizuj(double uplyw_czasu){}
