#include"SpriteConfig.hpp"
SpriteConfig::SpriteConfig()
{
    Insert("liczby",SpriteConfigData(5, 4, 1, 0, 38, 50, 38, false));
    Insert("liczby-loop", SpriteConfigData(5, 4, 1, 0, 38, 50, 38, true));
    Insert("litery", SpriteConfigData(5, 3, .5, 0, 77, 50, 38, true));
}
SpriteConfigData SpriteConfig::Get(const std::string& nazwa) const
{
    if(CzyZawiera(nazwa))
    return m_dane.find(nazwa)->second;
    throw("Nie znaleziono: "+nazwa);
}
bool SpriteConfig::CzyZawiera(const std::string& nazwa) const
{
    return (m_dane.find(nazwa)!=m_dane.end());
}
void SpriteConfig::Insert(const std::string& nazwa, const SpriteConfigData& dane0)
{
    m_dane.insert(std::make_pair(nazwa,dane));
}
