#include "painter.h"
#include <cmath>

/***
    Args: color (SDL_Color): color value 
@@ -8,7 +9,7 @@
***/
void Painter::setColor(SDL_Color color) 
{ 
    // TODO: set the color value for the Painter and set Render Draw Color
    this->color = color;
}


@@ -20,7 +21,8 @@ void Painter::setColor(SDL_Color color)
***/
void Painter::jumpForward(int numPixel)
{
    // TODO: jump the painter forward
    this->x += numPixel * cos(this->angle);
    this->y += numPixel * sin(this->angle);
}


@@ -32,7 +34,7 @@ void Painter::jumpForward(int numPixel)
***/
void Painter::jumpBackward(int numPixel)
{
    // TODO: jump the painter backward
    this->jumpForward(-numPixel);
}


@@ -44,7 +46,7 @@ void Painter::jumpBackward(int numPixel)
***/       
void Painter::turnLeft(double degree)
{
    // TODO: rotate left the painter   
    this->angle -= degree * M_PI / 180;   
}


@@ -56,7 +58,7 @@ void Painter::turnLeft(double degree)
***/     
void Painter::turnRight(double degree)
{
    // TODO: rotate right the painter   
    this->turnLeft(-degree);
}

/***  
@@ -67,7 +69,9 @@ void Painter::turnRight(double degree)
***/
void Painter::randomColor()
{
    // TODO: set random color    
    this->color.r = rand();
    this->color.g = rand();
    this->color.b = rand();
}


@@ -78,7 +82,7 @@ void Painter::clearWithBgColor(SDL_Color bgColor)
{
    SDL_Color curColor = color;
    setColor(bgColor);
	SDL_RenderClear(renderer);    
	  SDL_RenderClear(renderer);    
    setColor(curColor);
}