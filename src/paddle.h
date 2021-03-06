#ifndef PADDLE_H
#define PADDLE_H

#include <SDL2/SDL.h>
#include "entity.h"
#include "side.h"

class Paddle : public Entity {
    private:
        int speed;
        bool isAI;
        Side side;

    public:
        Paddle(int speed, Side side, bool isAI);
        void update(SDL_Rect ball);
        void setSpeed(int speed);
        void moveDown();
        void moveUp();
        void moveLeft();
        void moveRight();
        SDL_Rect& getRect();
};

#endif
