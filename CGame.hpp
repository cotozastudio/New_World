#ifndef CGame_hpp
#define CGame_hpp
#include <SFML/Graphics.hpp>
class CGame
{
    public:
    CGame (size_t okn_szer,size_t okn_wys,bool full)
    :m_okno_szerokosc(okn_szer),m_okno_wysokosc(okn_wys),m_fullscreen(full){}

    void Run();
    private:
    void Rysuj();
    void Aktualizuj(double uplyw_czasu);
    void ZmienRozdzielczosc(size_t szerokosc,size_t wysokosc);
    void ObslugaZdarzen();

    size_t m_okno_szerokosc;
    size_t m_okno_wysokosc;
    bool m_fullscreen;
    bool is_done;
    sf::RenderWindow m_okno_glowne

}
