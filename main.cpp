#include <SFML/Window.hpp>
#include"CGame.hpp"
#include"SpriteConfig.hpp"

int main(int argc,char* argv[])
{
    CGame game(600,400,false);
    game.Run();

    return 0;
}
