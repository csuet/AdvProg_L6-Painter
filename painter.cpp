#include "painter.h"
#include<iostream>

using namespace std;

/***
    Args: color (SDL_Color): color value
    Returns:
        None
*/
void Painter::setColor(SDL_Color color)
{
    // TODO: set the color value for the Painter and set Render Draw Color
    this->color = color;
    SDL_SetRenderDrawColor( render, color.r, color.g, color.b, 0);
}


/***
    Args: numPixel (int): number of pixel for jumping forward
    Returns:
        None
***/
void Painter::jumpForward(int numPixel)
{
    // TODO: jump the painter forward
    float rad = (angle /180) *M_PI;
    x += numPixel * cos(rad);
    y -= numPixel * sin(rad);
}


/***
    Args: numPixel (int): number of pixel for jumping backward
    Returns:
        None
***/
void Painter::jumpBackward(int numPixel)
{
    // TODO: jump the painter backward
    Painter.jumpForward(-numPixel);
}


/***
    Args: degree (double): the value of rotation angle
    Returns:
        None
***/
void Painter::turnLeft(double degree)
{
    // TODO: rotate left the painter
    angle += degree;
    angle -= floor(angle /360) *360;
}


/***
    Args: degree (double): the value of rotation angle
    Returns:
        None
***/
void Painter::turnRight(double degree)
{
    // TODO: rotate right the painter
    Painter.turnLeft(-degree);
}

/***
    Args:
        None
    Returns:
        None
***/
void Painter::randomColor()
{
    // TODO: set random color
    Uint8 r = rand() % 256;
    Uint8 g = rand() % 256;
    uint8 b = rand() % 256;
    SDL_Color color = {r,g,b};
    Painter.setColor(color);
}
{
    SDL_Color curColor = color;
    setColor(bgColor);
	SDL_RenderClear(renderer);
    setColor(curColor);
}
        turnLeft(60);
        moveForward(size);
        turnLeft(120);
    }
}
