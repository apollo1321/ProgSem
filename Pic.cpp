#include "TXLib.h"

int main()
    {
    txCreateWindow (800, 600);


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


    txSetColor      (RGB ( 83,  83,  83));
    txSetFillColor  (RGB ( 83,  83,  83));
    txRectangle (287, 470, 513, 500);

    txSetColor      (RGB (102, 100, 102));
    txSetFillColor  (RGB (102, 102, 102));
    txRectangle (299, 470, 499, 490);

    txSetColor      (RGB (199, 195,   4));
    txSetFillColor  (RGB (199, 195,   4));
    txRectangle (299, 470, 309, 490);
    txRectangle (489, 470, 499, 490);
    txRectangle (363, 470, 373, 483);
    txRectangle (425, 470, 435, 483);

    txSetColor      (RGB (235, 234, 234));
    txSetFillColor  (RGB (235, 234, 234));
    txRectangle (331, 470, 341, 483);
    txRectangle (457, 470, 467, 483);
    txRectangle (382, 470, 415, 477);


    txSetColor      (RGB (220, 237, 255));
    txSetFillColor  (RGB (220, 237, 255));

    txRectangle ( 73,  93, 158, 100);
    txRectangle ( 41, 100, 192, 116);
    txRectangle ( 22, 116, 206, 134);
    txRectangle ( 41, 134, 193, 150);
    txRectangle ( 62, 150, 166, 163);
    txRectangle ( 84, 163, 147, 167);

    txRectangle (615, 134, 700, 141);
    txRectangle (583, 141, 734, 157);
    txRectangle (564, 157, 748, 175);
    txRectangle (583, 175, 735, 191);
    txRectangle (604, 191, 708, 204);
    txRectangle (626, 204, 689, 208);


    txSetColor      (RGB (255, 255,   0));
    txSetFillColor  (RGB (255, 255,   0));

    txCircle (780, 20, 32);

    txLine (750,  5, 745,  2);
    txLine (748, 14, 741, 14);
    txLine (748, 21, 740, 21);
    txLine (749, 26, 743, 29);
    txLine (751, 32, 745, 36);
    txLine (757, 40, 752, 45);
    txLine (764, 45, 761, 51);
    txLine (775, 50, 772, 57);
    txLine (785, 52, 786, 56);
    txLine (794, 48, 797, 54);


    txSetColor      (RGB (235, 234, 234));
    txSetFillColor  (RGB (235, 234, 234));
    txRectangle (392,  88, 418, 421);

    txSetColor      (RGB (  0,   0,   0), 2);
    txLine (375, 101, 392, 101);
    txLine (400, 101, 409, 101);
    txLine (417, 101, 434, 101);

    txSetColor      (RGB (  0,   0,   0));
    txSetFillColor  (RGB (  0,   0,   0));

    POINT LandingGear[11] = {{392, 363}, {392, 407}, {365, 439},
                             {392, 419}, {392, 420}, {417, 420},
                             {417, 419}, {445, 439}, {417, 407},
                             {417, 363}, {405, 398}};
    txPolygon (LandingGear, 11);

    txSetColor      (RGB (  0,   0,   0), 2);
    txLine (392, 391, 378, 423);
    txLine (417, 391, 432, 423);

    txSetColor      (RGB (  0,   0,   0));

    txLine (393, 424, 396, 421);
    txLine (400, 424, 397, 421);
    txLine (394, 423, 399, 423);

    txLine (401, 424, 404, 421);
    txLine (408, 424, 405, 421);
    txLine (402, 423, 407, 423);

    txLine (409, 424, 412, 421);
    txLine (416, 424, 413, 421);
    txLine (410, 423, 415, 423);

    txSetColor      (RGB (255,   0,   0));
    txLine (392, 430, 394, 427);
    txLine (394, 427, 396, 430);
    txLine (396, 430, 399, 428);
    txLine (399, 428, 400, 431);
    txLine (400, 431, 401, 428);
    txLine (401, 428, 403, 431);
    txLine (403, 431, 407, 428);
    txLine (407, 428, 408, 431);
    txLine (408, 431, 412, 428);
    txLine (412, 428, 418, 431);

    txSetColor      (RGB ( 30,  12,  143));
    txSelectFont ("Arial", 28, 0, FW_BOLD);
    txDrawText (392, 142, 418, 348, "S\nP\nA\nC\nE\nX");


    return 0;
    }
