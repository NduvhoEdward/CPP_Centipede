#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include "Blaster.h"

class Player {
   public:
    Player();
    virtual ~Player();
    void draw_player(sf::RenderWindow*);
    void move_player();  // For moving the player/bluster
    Blaster* fire_bullet();
    float player_getPosX();
    float player_getPosY();

   protected:
   private:
    sf::Sprite player;
    sf::Texture playerTexture;
    void initPlayer();
    bool foward = true;
};

#endif  // _H
