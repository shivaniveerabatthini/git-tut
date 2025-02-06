#include "Gameobjects.h"

int main()
{
    Player player;
    Enemy enemy;
    Game game;

    // Example usage
    player.setHealth(100);
    player.setScore(0);

    game.start();
    return 0;
}
