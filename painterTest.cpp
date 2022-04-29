#include <iostream>
#include <cmath>
#include <cppunit/TestRunner.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/extensions/TestFactoryRegistry.h>


#include "painter.h"
#include "utils.h"
struct TestStruct {
    std::string testName;
    bool expected;
    std::string errorMsg;
};
bool verifySetColor(SDL_Color color) { 
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Color color1 = {0, 0, 0};
    initSDL(&window, &renderer);
    Painter painter(window, renderer);
    painter.setColor(color);
    SDL_GetRenderDrawColor(painter.getRenderer(), &(color1.r), &(color1.g), &(color1.b), &(color1.a));
    if (color1.r == color.r & color.g == color.g && color1.b == color.b && painter.getColor().r == color.r && painter.getColor().g == color.g && painter.getColor().b == color.b) {
        return true;
    }
