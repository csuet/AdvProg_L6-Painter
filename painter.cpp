#include "painter.h"
#include<iostream>

using namespace std;

void Painter::setColor(SDL_Color color)
{
    this -> color = color;
    SDL_setRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
}

void Painter::jumpForward(int numPixel)
{
    float rad = (angle /180)*M_PI;
    x+= numPixel * cos(rad);
    y-= numPixel * sin(rad);
}

void Painter::jumpBackward(int numPixel)
{
	painter.jumpForward(-numPixel);
}

void Painter::turnLeft(double degree)
{
    // TODO: rotate left the painter
	angle += degree;
	angle -= floor(angle/360) * 360;
}

void Painter::turnRight(double degree)
{
    // TODO: rotate right the painter
	painter.turnLeft(-degree);
}

void Painter::randomColor()
{
    // TODO: set random color
    Uint8 r = rand() % 256;
    Uint8 g = rand() % 256;
    Uint8 b = rand() % 256;
    SDL_Color color = {r,g,b};
    painter.setColor(color);
}

void Painter::clearWithBgColor(SDL_Color bgColor)
{
    SDL_Color curColor = color;
    setColor(bgColor);
	SDL_RenderClear(renderer);
    setColor(curColor);
}

Painter::Painter(SDL_Window* window, SDL_Renderer *renderer)
{
    SDL_RenderGetLogicalSize(renderer, &width, &height);
    if (width == 0 && height == 0) {
        SDL_GetWindowSize(window, &width, &height);
    }
    this->renderer = renderer;
    setPosition(width/2, height/2);
    setAngle(0);
    setColor(WHITE_COLOR);
    clearWithBgColor(BLUE_COLOR);
}

void Painter::createCircle(int radius)
{
    double rad = (angle / 180) * M_PI;
    int centerX = x + (int) (cos(rad) * (double) radius);;
    int centerY = y - (int) (sin(rad) * (double) radius);;

    int dx = radius;
    int dy = 0;
    int err = 0;

    while (dx >= dy)
    {
        SDL_RenderDrawPoint(renderer, centerX + dx, centerY + dy);
        SDL_RenderDrawPoint(renderer, centerX + dy, centerY + dx);
        SDL_RenderDrawPoint(renderer, centerX - dy, centerY + dx);
        SDL_RenderDrawPoint(renderer, centerX - dx, centerY + dy);
        SDL_RenderDrawPoint(renderer, centerX - dx, centerY - dy);
        SDL_RenderDrawPoint(renderer, centerX - dy, centerY - dx);
        SDL_RenderDrawPoint(renderer, centerX + dy, centerY - dx);
        SDL_RenderDrawPoint(renderer, centerX + dx, centerY - dy);

        if (err <= 0)
        {
            dy += 1;
            err += 2*dy + 1;
        }
        if (err > 0)
        {
            dx -= 1;
            err -= 2*dx + 1;
        }
    }
}

void Painter::createParallelogram(int size)
{
	for (int i = 0; i < 2; ++i) {
        moveForward(size);
        turnLeft(60);
        moveForward(size);
        turnLeft(120);
    }
}

void Painter::createSquare(int size)
{
	for (int i = 0; i < 4; ++i) {
        moveForward(size);
	    turnLeft(90);
    }
}

void Painter::moveForward(int numPixel)
{
    int preX = x, preY = y;
    jumpForward(numPixel);
    SDL_RenderDrawLine(renderer, preX, preY, x, y);
}

void Painter::moveBackward(int numPixel)
{
    moveForward(-numPixel);
}
