void Painter::setColor(SDL_Color color) 
{ 
    // TODO: set the color value for the Painter and set Render Draw Color
    this -> color = color;
    SDL_setRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
}


@@ -21,6 +23,9 @@ void Painter::setColor(SDL_Color color)
void Painter::jumpForward(int numPixel)
{
    // TODO: jump the painter forward
    float rad = (angle /180) *M_PI;
    x += numPixel * cos(rad);
    y -= numPixel * sin(rad);
}


@@ -33,6 +38,7 @@ void Painter::jumpForward(int numPixel)
void Painter::jumpBackward(int numPixel)
{
    // TODO: jump the painter backward
    painter.jumpForward( - numPixel );
}


@@ -44,7 +50,10 @@ void Painter::jumpBackward(int numPixel)
***/       
void Painter::turnLeft(double degree)
{
    // TODO: rotate left the painter   
    // TODO: rotate left the painter
    //degree -= floor(degree / 360) * 360;
    angle + = degree;
    angle -= floor(angle /360) * 360;
}


@@ -57,6 +66,7 @@ void Painter::turnLeft(double degree)
void Painter::turnRight(double degree)
{
    // TODO: rotate right the painter   
    painter.turnLeft(-degree);
}

/***  
@@ -67,7 +77,13 @@ void Painter::turnRight(double degree)
***/
void Painter::randomColor()
{
    // TODO: set random color    
    // TODO: set random color 
    Uint8 r = rand() % 256;
    Uint8 g = rand() % 256;
    Uint8 b = rand() % 256;
    //Uint8 a = rand() % 256;
    SDL_Color color = {r,g,b};
    painter.setColor(color);
}


@@ -166,4 +182,3 @@ void Painter::moveBackward(int numPixel)
{
    moveForward(-numPixel);
}
