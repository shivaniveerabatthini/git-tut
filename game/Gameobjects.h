#ifndef GAMEOBJECTS_H
#define GAMEOBJECTS_H

#include <vector> // Required for std::vector

class Player
{
private:
    int health;
    int score;

public:
    // Constructor
    Player();

    // Getter and Setter for health
    int getHealth() const;
    void setHealth(int health);

    // Getter and Setter for score
    int getScore() const;
    void setScore(int score);

    // Other methods
    void move(int x, int y);
    void attack();
};

class Enemy
{
private:
    int health;
    int attackPower;

public:
    // Constructor
    Enemy();

    // Getter and Setter for health
    int getHealth() const;
    void setHealth(int health);

    // Other methods
    void attackPlayer(Player &player);
};

class Game
{
private:
    Player player;              // A single player
    std::vector<Enemy> enemies; // A list of enemies

public:
    // Constructor
    Game();

    // Method to start the game
    void start();

    // Method to update game state
    void update();
};

#endif // GAMEOBJECTS_H
