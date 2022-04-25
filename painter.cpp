#include "painter.h"
#include<iostream>

using namespace std;

/***
    Args: color (SDL_Color): color value 
        
    Args: color (SDL_Color): color value
    Returns:
        None
***/
void Painter::setColor(SDL_Color color) 
{ 
void Painter::setColor(SDL_Color color)
{
    // TODO: set the color value for the Painter and set Render Draw Color
    this -> color = color;
    SDL_setRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
@@ -16,7 +19,7 @@ void Painter::setColor(SDL_Color color)

/***
    Args: numPixel (int): number of pixel for jumping forward
        
    Returns:
        None
***/
@@ -31,7 +34,7 @@ void Painter::jumpForward(int numPixel)

/***
    Args: numPixel (int): number of pixel for jumping backward
        
    Returns:
        None
***/
@@ -44,39 +47,39 @@ void Painter::jumpBackward(int numPixel)

/***
    Args: degree (double): the value of rotation angle
        
    Returns:
        None
***/       
***/
void Painter::turnLeft(double degree)
{
    // TODO: rotate left the painter   
    // TODO: rotate left the painter
	angle += degree;
	angle -= floor(angle/360) * 360;
}


/***
    Args: degree (double): the value of rotation angle
        
    Returns:
        None
***/     
***/
void Painter::turnRight(double degree)
{
    // TODO: rotate right the painter   
    // TODO: rotate right the painter
	painter.turnLeft(-degree);
}

/***  
    Args: 
/***
    Args:
        None
    Returns:
        None
***/
void Painter::randomColor()
{
    // TODO: set random color   
    // TODO: set random color
    Uint8 r = rand() % 256;
    Uint8 g = rand() % 256;
    Uint8 b = rand() % 256;
@@ -92,7 +95,7 @@ void Painter::clearWithBgColor(SDL_Color bgColor)
{
    SDL_Color curColor = color;
    setColor(bgColor);
	SDL_RenderClear(renderer);    
	SDL_RenderClear(renderer);
    setColor(curColor);
}

@@ -154,7 +157,7 @@ void Painter::createParallelogram(int size)
        turnLeft(60);
        moveForward(size);
        turnLeft(120);
    }	
    }
}
