#ifndef CGame_hpp
#define CGame_hpp
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
class CGame
{
    public:
    CGame (size_t m_okno_szerokosc,size_t m_okno_wysokosc,bool m_fullscreen);
    ~CGame();
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
    sf::Window* m_okno_glowne;

};
#endif
