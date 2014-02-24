#include "Arduino.h"
#include <math.h>

struct TPoint 
{
  int x;
  int y;
};

{=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
TPoint point(int x; int y);
Contributors: ShadowRecon.
Description: Creates a TPoint from x and y.
Date Created: June 3rd, 2013. By ShadowRecon.
Last Modified: June 3rd, 2013. By ShadowRecon.
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=}

TPoint point(int x; int y) 
{
  TPoint _p;
  _p.x = x;
  _p.y = y;
}

{=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
int Distance(TPoint P1, TPointp P2);
Contributors: ShadowRecon.
Description: Returns distance between 2 TPoints.
Date Created: June 3rd, 2013. By ShadowRecon.
Last Modified: June 3rd, 2013. By ShadowRecon.
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=}

int Distance(TPoint P1, TPoint p2)
{
  return sqrt(pow(P2.x-P1.x, 2) + pow(P2.y-P2.y, 2));
}


{=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
float getPointAngle(TPoint P1, TPoint P2)
Contributors: ShadowRecon.
Description: Returns angle in radians between 2 TPoints.
Date Created: June 3rd, 2013. By ShadowRecon.
Last Modified: June 3rd, 2013. By ShadowRecon.
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=}

float getPointAngleRadians(TPoint P1, TPoint P2)
{
  return aTan2(P1.Y - P2.Y, P1.X - P2.X)
}

{=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
float getPointAngleDegrees(TPoint P1, TPoint P2)
Contributors: ShadowRecon.
Description: Returns angle in degrees between 2 TPoints.
Date Created: June 3rd, 2013. By ShadowRecon.
Last Modified: June 3rd, 2013. By ShadowRecon.
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=}

float getPointAngleDegrees(TPoint P1, TPoint P2)
{
  return aTan2(P1.Y - P2.Y, P1.X - P2.X)
}





