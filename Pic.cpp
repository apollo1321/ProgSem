#include "TXLib.h"

#include <cmath>

using std::sin;
using std::cos;
using std::tan;

void drawEnv (int skyGradientCount = 5, int waterGradientCount = 3, double waterLevel = 0.37, bool wavesOn = true);

//Randomly draws waves in rectangle area formed by areaP1 and areaP2
void drawWaves ( POINT areaP1, POINT areaP2, int count = 15, int xSize = 17, int ySize = 10);

//Pivot is left top point of the rocket
void drawRocket (int x, int y, bool engineOn = true, double sideFinsAngle = 0, double middleFinsAngle = 0, double finsWidth = 5);

//Pivot is central point of circle
void drawSun (int x, int y, int radius = 32, int rayCount = 15, double rayLength = 10, double rayWidth = 5);

//Pivot is left top point of box that fit the cloud
void drawCloud (int x, int y);

//Pivot is left top point of the platform
void drawLandPlatf (int x, int y);

//Help function for drawing the Sun
//Pivot is bottom central point
void drawTriangle (int x, int y, int height, int width, double angle = 0);


int main()
    {
    txCreateWindow (800, 600);

    drawEnv (100, 100);
    drawSun (700, 60);
    drawCloud (100, 200);
    drawCloud (500, 140);
    drawRocket (390, 88, true, 10, 8);
    drawLandPlatf (290, 470);

    return 0;
    }

void drawWaves ( POINT areaP1, POINT areaP2, int count, int xSize, int ySize)
    {
    txSetColor      (RGB (  0, 168, 236));
    txSetFillColor  (RGB (  0, 168, 236));

    for (int i = 0; i < count; ++i)
        {
        int x = random (areaP1.x, areaP2.x);
        int y = random (areaP1.y, areaP2.y);
        txRectangle ( x, y, x + xSize, y + ySize);
        }
    }


void drawEnv (int skyGradientCount, int waterGradientCount, double waterLevel, bool wavesOn)
    {
    POINT size = txGetExtent();

    double yStepSky = size.y * (1 - waterLevel) / skyGradientCount;

    const int rSStart = 62 ;
    const int gSStart = 154;
    const int bSStart = 255;

    const int rSEnd   = 188;
    const int gSEnd   = 220;
    const int bSEnd   = 255;

    double rStepSky = double (rSEnd - rSStart) / skyGradientCount;
    double gStepSky = double (gSEnd - gSStart) / skyGradientCount;
    double bStepSky = double (bSEnd - bSStart) / skyGradientCount;

    for (int i = 0; i < skyGradientCount; ++i)
        {
        COLORREF color = RGB ( rSStart + rStepSky * i, gSStart + gStepSky * i, bSStart + bStepSky * i);
        txSetColor      (color);
        txSetFillColor  (color);
        txRectangle (0, i * yStepSky, size.x + 1, (i + 1) * yStepSky);
        }


    int yWaterStart = skyGradientCount * yStepSky;
    double yStepWater = size.y * waterLevel / waterGradientCount;

    const int rWStart = 0  ;
    const int gWStart = 84;
    const int bWStart = 255;

    const int rWEnd   = 0;
    const int gWEnd   = 0;
    const int bWEnd   = 255;

    double rStepWater = double (rWEnd - rWStart) / waterGradientCount;
    double gStepWater = double (gWEnd - gWStart) / waterGradientCount;
    double bStepWater = double (bWEnd - bWStart) / waterGradientCount;

    for (int i = 0; i < waterGradientCount; ++i)
        {
        COLORREF color = RGB ( rWStart + rStepWater * i, gWStart + gStepWater * i, bWStart + bStepWater * i);
        txSetColor      (color);
        txSetFillColor  (color);
        txRectangle (0, yWaterStart + i * yStepWater, size.x + 1, yWaterStart + (i + 1) * yStepWater);
        }

    txRectangle (0, yWaterStart + waterGradientCount * yStepWater, size.x + 1, size.y + 1);

    if(wavesOn)
        drawWaves ({0, yWaterStart}, {size.x, size.y}, 20);
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



void drawSun (int x, int y, int radius, int rayCount, double rayLength, double rayWidth)
    {
    txSetColor      (RGB (255, 255,   0));
    txSetFillColor  (RGB (255, 255,   0));

    txCircle (x, y, radius);

    for (int i = 0; i < rayCount; ++i)
        {
        double angle = i * 360. / rayCount;
        drawTriangle (x + radius * cos (angle * txPI / 180.), y + radius * sin (angle * txPI / 180.), rayLength, rayWidth, angle + 90);
        }
    }

void drawTriangle (int x, int y, int height, int width, double angle)
    {
    angle = angle * txPI / 180.;
    POINT trianglePoints[3] = {{x + (width / 2) * cos (angle), y + (width / 2) * sin (angle)},
                               {x - (width / 2) * cos (angle), y - (width / 2) * sin (angle)},
                               {x +  height     * sin (angle), y -  height     * cos (angle)}};
    txPolygon (trianglePoints, 3);
    }

void drawRocket (int x, int y, bool engineOn, double sideFinsAngle, double middleFinsAngle, double finsWidth)
    {
    txSetColor      (RGB (235, 234, 234));
    txSetFillColor  (RGB (235, 234, 234));
    txRectangle (x,  y, x + 26, y + 333);


    txSetColor      (RGB (  0,   0,   0), 2);
    txSetFillColor  (RGB (  0,   0,   0));

    double sideFinsBias   = finsWidth * sin (M_PI *   sideFinsAngle / 180.) / 2.;
    txRectangle (x - 18, y + 13 - sideFinsBias    , x     , y + 13 + sideFinsBias + 1);
    txRectangle (x + 27, y + 13 + sideFinsBias + 1, x + 45, y + 13 - sideFinsBias    );


    double middleFinsBias = finsWidth * tan (M_PI * middleFinsAngle / 180.) / 2.;
    txLine (x +  8, y + 13 + middleFinsBias, x + 17, y + 13 - middleFinsBias);


    txSetColor      (RGB (  0,   0,   0), 1);
    txSetFillColor  (RGB (  0,   0,   0));


    POINT landingGear[11] = {{x     , y + 275}, {x     , y + 319}, {x - 27, y + 351},
                             {x     , y + 331}, {x     , y + 332}, {x + 25, y + 332},
                             {x + 25, y + 331}, {x + 52, y + 351}, {x + 25, y + 319},
                             {x + 25, y + 275}, {x + 13, y + 310}};
    txPolygon (landingGear, 11);


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


    if(engineOn)
        {
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
        }


    txSetColor      (RGB ( 30,  12,  143), 1);
    txSelectFont ("Arial", 28, 0, FW_BOLD);
    txDrawText (x, y + 54, x + 26, y + 260, "S\nP\nA\nC\nE\nX");
    }
