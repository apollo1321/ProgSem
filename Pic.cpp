#include "TXLib.h"

void drawEnv ();

//Pivot is left top point of the rocket
void drawRocket (int x, int y);

//Pivot is central point of circle
void drawSun (int x, int y);

//Pivot is left top point of box that fit the cloud
void drawCloud (int x, int y);

//Pivot is left top point of the platform
void drawLandPlatf (int x, int y);


int main()
    {
    txCreateWindow (800, 600);

    drawEnv ();
    drawSun (780, 20);
    drawCloud (100, 200);
    drawCloud (500, 140);
    drawRocket (390, 88);
    drawLandPlatf (290, 470);

    return 0;
    }


void drawEnv ()
    {
    txSetColor      (RGB ( 62, 154, 255));
    txSetFillColor  (RGB ( 62, 154, 255));
    txRectangle (  0,   0, 800, 103);

    txSetColor      (RGB ( 96, 171, 255));
    txSetFillColor  (RGB ( 96, 171, 255));
    txRectangle (  0, 103, 800, 170);

    txSetColor      (RGB (118, 183, 255));
    txSetFillColor  (RGB (118, 183, 255));
    txRectangle (  0, 170, 800, 240);

    txSetColor      (RGB (160, 205, 255));
    txSetFillColor  (RGB (160, 205, 255));
    txRectangle (  0, 240, 800, 309);

    txSetColor      (RGB (187, 219, 254));
    txSetFillColor  (RGB (187, 219, 254));
    txRectangle (  0, 309, 800, 379);

    txSetColor      (RGB (  0,  84, 255));
    txSetFillColor  (RGB (  0,  84, 255));
    txRectangle (  0, 379, 800, 489);

    txSetColor      (RGB (  0,   0, 255));
    txSetFillColor  (RGB (  0,   0, 255));
    txRectangle (  0, 489, 800, 600);

    txSetColor      (RGB (  0, 168, 236));
    txSetFillColor  (RGB (  0, 168, 236));
    txRectangle ( 38, 527,  55, 537);
    txRectangle (143, 549, 160, 559);
    txRectangle (251, 529, 268, 539);
    txRectangle (269, 492, 287, 502);
    txRectangle (286, 500, 303, 509);
    txRectangle (354, 547, 371, 557);
    txRectangle (481, 529, 498, 539);
    txRectangle (504, 505, 521, 515);
    txRectangle (513, 499, 531, 509);
    txRectangle (600, 548, 617, 558);
    txRectangle (726, 527, 743, 537);
    }


void drawLandPlatf (int x, int y)
    {
    txSetColor      (RGB ( 83,  83,  83));
    txSetFillColor  (RGB ( 83,  83,  83));
    txRectangle (x      , y, x + 226, y + 30);

    txSetColor      (RGB (102, 100, 102));
    txSetFillColor  (RGB (102, 102, 102));
    txRectangle (x +  12, y, x + 212, y + 20);

    txSetColor      (RGB (199, 195,   4));
    txSetFillColor  (RGB (199, 195,   4));
    txRectangle (x +  12, y, x +  22, y + 20);
    txRectangle (x + 202, y, x + 212, y + 20);
    txRectangle (x +  76, y, x +  86, y + 13);
    txRectangle (x + 138, y, x + 148, y + 13);

    txSetColor      (RGB (235, 234, 234));
    txSetFillColor  (RGB (235, 234, 234));
    txRectangle (x +  44, y, x +  54, y + 13);
    txRectangle (x + 170, y, x + 180, y + 13);
    txRectangle (x +  95, y, x + 128, y +  7);
    }


void drawCloud (int x, int y)
    {
    txSetColor      (RGB (220, 237, 255));
    txSetFillColor  (RGB (220, 237, 255));

    txRectangle ( x + 51, y     , x + 136, y + 7 );
    txRectangle ( x + 19, y + 7 , x + 170, y + 23);
    txRectangle ( x     , y + 23, x + 184, y + 41);
    txRectangle ( x + 19, y + 41, x + 171, y + 57);
    txRectangle ( x + 40, y + 57, x + 144, y + 70);
    txRectangle ( x + 62, y + 70, x + 125, y + 74);
    }


void drawSun (int x, int y)
    {
    txSetColor      (RGB (255, 255,   0));
    txSetFillColor  (RGB (255, 255,   0));

    txCircle (x, y, 32);

    txLine (x - 30, y - 15, x - 35, y - 18);
    txLine (x - 32, y -  6, x - 39, y - 6 );
    txLine (x - 32, y +  1, x - 40, y + 1 );
    txLine (x - 31, y +  6, x - 37, y + 9 );
    txLine (x - 29, y + 12, x - 35, y + 16);
    txLine (x - 23, y + 20, x - 28, y + 25);
    txLine (x - 16, y + 25, x - 19, y + 31);
    txLine (x -  5, y + 30, x -  8, y + 37);
    txLine (x +  5, y + 32, x +  6, y + 36);
    txLine (x + 14, y + 28, x + 17, y + 34);
    }


void drawRocket (int x, int y)
    {
    txSetColor      (RGB (235, 234, 234));
    txSetFillColor  (RGB (235, 234, 234));
    txRectangle (x,  y, x + 26, y + 333);

    txSetColor      (RGB (  0,   0,   0), 2);
    txLine (x - 17, y + 13, x     , y + 13);
    txLine (x +  8, y + 13, x + 17, y + 13);
    txLine (x + 25, y + 13, x + 42, y + 13);

    txSetColor      (RGB (  0,   0,   0), 1);
    txSetFillColor  (RGB (  0,   0,   0));

    POINT LandingGear[11] = {{x     , y + 275}, {x     , y + 319}, {x - 27, y + 351},
                             {x     , y + 331}, {x     , y + 332}, {x + 25, y + 332},
                             {x + 25, y + 331}, {x + 52, y + 351}, {x + 25, y + 319},
                             {x + 25, y + 275}, {x + 13, y + 310}};
    txPolygon (LandingGear, 11);

    txSetColor      (RGB (  0,   0,   0), 2);
    txLine (x     , y + 303, x - 14, y + 335);
    txLine (x + 25, y + 303, x + 40, y + 335);

    txSetColor      (RGB (  0,   0,   0), 1);

    txLine (x +  1, y + 336, x +  4, y + 333);
    txLine (x +  8, y + 336, x +  5, y + 333);
    txLine (x +  2, y + 335, x +  7, y + 335);

    txLine (x +  9, y + 336, x + 12, y + 333);
    txLine (x + 16, y + 336, x + 13, y + 333);
    txLine (x + 10, y + 335, x + 15, y + 335);

    txLine (x + 17, y + 336, x + 20, y + 333);
    txLine (x + 24, y + 336, x + 21, y + 333);
    txLine (x + 18, y + 335, x + 23, y + 335);

    txSetColor      (RGB (255,   0,   0), 1);
    txLine (x     , y + 342, x +  2, y + 339);
    txLine (x +  2, y + 339, x +  4, y + 342);
    txLine (x +  4, y + 342, x +  7, y + 340);
    txLine (x +  7, y + 340, x +  8, y + 343);
    txLine (x +  8, y + 343, x +  9, y + 340);
    txLine (x +  9, y + 340, x + 11, y + 343);
    txLine (x + 11, y + 343, x + 15, y + 340);
    txLine (x + 15, y + 340, x + 16, y + 343);
    txLine (x + 16, y + 343, x + 20, y + 340);
    txLine (x + 20, y + 340, x + 26, y + 343);

    txSetColor      (RGB ( 30,  12,  143), 1);
    txSelectFont ("Arial", 28, 0, FW_BOLD);
    txDrawText (x, y + 54, x + 26, y + 260, "S\nP\nA\nC\nE\nX");
    }
