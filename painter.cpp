void Painter::setColor(SDL_Color color) 
{ 
    // TODO: set the color value for the Painter and set Render Draw Color
    this->color = color;
}


@@ -21,6 +22,9 @@ void Painter::setColor(SDL_Color color)
void Painter::jumpForward(int numPixel)
{
    // TODO: jump the painter forward
    float random = (angle / 180) * M_PI;
    x += numPixel * cos(random);
    y -= numPixel * sin(random);
}


@@ -33,6 +37,7 @@ void Painter::jumpForward(int numPixel)
void Painter::jumpBackward(int numPixel)
{
    // TODO: jump the painter backward
    Painter.jumpForward(-numPixel);
}


@@ -44,7 +49,9 @@ void Painter::jumpBackward(int numPixel)
***/       
void Painter::turnLeft(double degree)
{
    // TODO: rotate left the painter   
    // TODO: rotate left the painter
    angle += degree;
    angle -= floor(angle / 360) * 360;
}


@@ -56,7 +63,8 @@ void Painter::turnLeft(double degree)
***/     
void Painter::turnRight(double degree)
{
    // TODO: rotate right the painter   
    // TODO: rotate right the painter
    Painter.turnLeft(-degree);
}

/***  
@@ -67,7 +75,12 @@ void Painter::turnRight(double degree)
***/
void Painter::randomColor()
{
    // TODO: set random color    
    // TODO: set random color
    Uint8 r = rand() % 256;
    Uint8 g = rand() % 256;
    Uint8 b = rand() % 256;
    SDL_Color color = {r, g, b};
    Painter.setColor(color);
}
