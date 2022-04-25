#include<iostream>
#include "painter.h"
#include "utils.h"

using namespace std;

struct TestStruct {
    std::string testName;
    bool expected;
    std::string errorMsg;
};


bool verifySetColor(SDL_Color color) { 
bool verifySetColor(SDL_Color color) {
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Color color1 = {0, 0, 0};
@@ -71,7 +73,7 @@ bool verifyJumpBackward(int numPixel, double angle, int curX, int curY, int diff
}


bool verifyTurnLeft(double degree, double curAngle, double expectedAngle) { 
bool verifyTurnLeft(double degree, double curAngle, double expectedAngle) {
    SDL_Window *window;
    SDL_Renderer *renderer;
    initSDL(&window, &renderer);
@@ -87,7 +89,7 @@ bool verifyTurnLeft(double degree, double curAngle, double expectedAngle) {
}


bool verifyTurnRight(double degree, double curAngle, double expectedAngle) { 
bool verifyTurnRight(double degree, double curAngle, double expectedAngle) {
    SDL_Window *window;
    SDL_Renderer *renderer;
    initSDL(&window, &renderer);
@@ -103,15 +105,15 @@ bool verifyTurnRight(double degree, double curAngle, double expectedAngle) {
}


bool verifyRandomColor() { 
bool verifyRandomColor() {
    SDL_Window *window;
    SDL_Renderer *renderer;
    initSDL(&window, &renderer);
    Painter painter(window, renderer);
    painter.randomColor();
    SDL_Color color = painter.getColor();
    if (validColorValue(color.r) && validColorValue(color.g) && validColorValue(color.b)) {
        return true; 
        return true;
    }
    else {
        return false;
@@ -154,119 +156,119 @@ class Test: public CPPUNIT_NS::TestCase {
  void testMyPainterSetColor(void){
      int testSize = 4;
      std::string sharedName = "[setColor test] ";
      TestStruct generateRandomNumberTestCases[testSize]  = 
      TestStruct generateRandomNumberTestCases[testSize]  =
      {
        {
            sharedName + "test normal 1", 
            verifySetColor(dict2SDL_Color(0, 255, 0)), 
            sharedName + "test normal 1",
            verifySetColor(dict2SDL_Color(0, 255, 0)),
            "The color of Painter and renderer must be the same with input color."
        },
        {
            sharedName + "test normal 2", 
            verifySetColor(dict2SDL_Color(0, 255, 255)), 
            sharedName + "test normal 2",
            verifySetColor(dict2SDL_Color(0, 255, 255)),
            "The color of Painter and renderer must be the same with input color."
        },
        {
            sharedName + "test normal 3", 
            verifySetColor(dict2SDL_Color(0, 255, 1)), 
            sharedName + "test normal 3",
            verifySetColor(dict2SDL_Color(0, 255, 1)),
            "The color of Painter and renderer must be the same with input color."
        },
        {
            sharedName + "test normal 4", 
            verifySetColor(dict2SDL_Color(100, 255, 0)), 
            sharedName + "test normal 4",
            verifySetColor(dict2SDL_Color(100, 255, 0)),
            "The color of Painter and renderer must be the same with input color."
        },
      };
      runTestLoop(generateRandomNumberTestCases, testSize);
    //   
    //
  }

  void testMyPainterJumpForward(void){
      int testSize = 4;
      std::string sharedName = "[jumpForward test] ";
      TestStruct generateRandomNumberTestCases[testSize]  = 
      TestStruct generateRandomNumberTestCases[testSize]  =
      {
        {
            sharedName + "test normal 1", 
            verifyJumpForward(30, 0, 0, 0, 30, 0), 
            sharedName + "test normal 1",
            verifyJumpForward(30, 0, 0, 0, 30, 0),
            "Jumping to wrong postion."
        },
        {
            sharedName + "test normal 2", 
            verifyJumpForward(30, 90, 90, 90, 0, -30), 
            sharedName + "test normal 2",
            verifyJumpForward(30, 90, 90, 90, 0, -30),
            "Jumping to wrong postion."
        },
        {
            sharedName + "test normal 3", 
            verifyJumpForward(30, 60, 90, 90, 15, -25), 
            sharedName + "test normal 3",
            verifyJumpForward(30, 60, 90, 90, 15, -25),
            "Jumping to wrong postion."
        },
        {
            sharedName + "test normal 4", 
            verifyJumpForward(50, 120, 90, 90, -24, -43), 
            sharedName + "test normal 4",
            verifyJumpForward(50, 120, 90, 90, -24, -43),
            "Jumping to wrong postion."
        },
      };
      runTestLoop(generateRandomNumberTestCases, testSize);
    //   
    //
  }

  void testMyPainterJumpBackward(void){
      int testSize = 4;
      std::string sharedName = "[jumpBackward test] ";
      TestStruct generateRandomNumberTestCases[testSize]  = 
      TestStruct generateRandomNumberTestCases[testSize]  =
      {
        {
            sharedName + "test normal 1", 
            verifyJumpBackward(50, 0, 90, 90, -50, 0), 
            sharedName + "test normal 1",
            verifyJumpBackward(50, 0, 90, 90, -50, 0),
            "Jumping to wrong postion."
        },
        {
            sharedName + "test normal 2", 
            verifyJumpBackward(40, 45, 90, 90, -28, 28), 
            sharedName + "test normal 2",
            verifyJumpBackward(40, 45, 90, 90, -28, 28),
            "Jumping to wrong postion."
        },
        {
            sharedName + "test normal 3", 
            verifyJumpBackward(40, 150, 90, 90, 34, 19), 
            sharedName + "test normal 3",
            verifyJumpBackward(40, 150, 90, 90, 34, 19),
            "Jumping to wrong postion."

        },
        {
            sharedName + "test normal 4",  
            verifyJumpBackward(15, 120, 90, 90, 7, 12), 
            sharedName + "test normal 4",
            verifyJumpBackward(15, 120, 90, 90, 7, 12),
            "Jumping to wrong postion."

        },
      };
      runTestLoop(generateRandomNumberTestCases, testSize);
    //   
    //
  }

  void testMyPainterTurnLeft(void){
      int testSize = 4;
      std::string sharedName = "[turnLeft test] ";
      TestStruct generateRandomNumberTestCases[testSize]  = 
      TestStruct generateRandomNumberTestCases[testSize]  =
      {
        {
            sharedName + "test normal 1", 
            verifyTurnLeft(30, 360, 30), 
            sharedName + "test normal 1",
            verifyTurnLeft(30, 360, 30),
            "Wrong direction turn."
        },
        {
            sharedName + "test normal 2", 
            verifyTurnLeft(30, 180, 210), 
            sharedName + "test normal 2",
            verifyTurnLeft(30, 180, 210),
            "Wrong direction turn."
        },
        {
            sharedName + "test normal 3", 
            verifyTurnLeft(-30, 120, 90), 
            sharedName + "test normal 3",
            verifyTurnLeft(-30, 120, 90),
            "Wrong direction turn."

        },
        {
            sharedName + "test normal 4",  
            verifyTurnLeft(0, 90, 90), 
            sharedName + "test normal 4",
            verifyTurnLeft(0, 90, 90),
            "Wrong direction turn."
        },
      };
@@ -276,26 +278,26 @@ class Test: public CPPUNIT_NS::TestCase {
  void testMyPainterTurnRight(void){
      int testSize = 4;
      std::string sharedName = "[turnRight test] ";
      TestStruct generateRandomNumberTestCases[testSize]  = 
      TestStruct generateRandomNumberTestCases[testSize]  =
      {
        {
            sharedName + "test normal 1", 
            verifyTurnRight(-30, 360, 30), 
            sharedName + "test normal 1",
            verifyTurnRight(-30, 360, 30),
            "Wrong direction turn."
        },
        {
            sharedName + "test normal 2", 
            verifyTurnRight(30, 180, 150), 
            sharedName + "test normal 2",
            verifyTurnRight(30, 180, 150),
            "Wrong direction turn."
        },
        {
            sharedName + "test normal 3", 
            verifyTurnRight(30, 0, -30), 
            sharedName + "test normal 3",
            verifyTurnRight(30, 0, -30),
            "Wrong direction turn."
        },
        {
            sharedName + "test normal 4",  
            verifyTurnRight(0, 90, 90), 
            sharedName + "test normal 4",
            verifyTurnRight(0, 90, 90),
            "Wrong direction turn."
        },
      };
@@ -305,37 +307,37 @@ class Test: public CPPUNIT_NS::TestCase {
  void testMyPainterRandomColor(void){
      int testSize = 4;
      std::string sharedName = "[turnRight test] ";
      TestStruct generateRandomNumberTestCases[testSize]  = 
      TestStruct generateRandomNumberTestCases[testSize]  =
      {
        {
            sharedName + "test normal 1", 
            sharedName + "test normal 1",
            verifyRandomColor(),
            "The color values are not invalid."
        },
        {
            sharedName + "test normal 2", 
            sharedName + "test normal 2",
            verifyRandomColor(),
            "The color values are not invalid."
        },
        {
            sharedName + "test normal 3", 
            verifyRandomColor(), 
            sharedName + "test normal 3",
            verifyRandomColor(),
            "The color values are not invalid."

        },
        {
            sharedName + "test normal 4",  
            verifyRandomColor(), 
            sharedName + "test normal 4",
            verifyRandomColor(),
            "The color values are not invalid."
        },
      };
      runTestLoop(generateRandomNumberTestCases, testSize);
    //   
    //
  }

  void successTestExit(void) {
    std::cout << "all tests passed! \n";
    

  }

};
@@ -357,4 +359,4 @@ int main() {
  runner.run(controller);

  return result.wasSuccessful() ? 0 : 1;
} 
}
