#include <math.h>

#include "Arduino.h"
#include "math.h"

struct TPoint 
{
  int x;
  int y;
};

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
TPoint point(int x; int y);
Contributors: ShadowRecon.
Description: Creates a TPoint from x and y.
Date Created: June 3rd, 2013. By ShadowRecon.
Last Modified: Feb. 24th, 2014. By ShadowRecon.
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

TPoint point(int x; int y) 
{
  TPoint _p;
  _p.x = x;
  _p.y = y;
}

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
int distance(TPoint P1, TPoint p2);
Contributors: ShadowRecon.
Description: Returns distance between 2 TPoints.
Date Created: June 3rd, 2013. By ShadowRecon.
Last Modified: Feb. 24th, 2014. By ShadowRecon.
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

int distance(TPoint P1, TPoint p2)
{
  return sqrt(pow(P2.x-P1.x, 2) + pow(P2.y-P2.y, 2));
}


/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
float getPointAngleRadians(TPoint P1, TPoint P2)
Contributors: ShadowRecon.
Description: Returns angle in radians between 2 TPoints.
Date Created: June 3rd, 2013. By ShadowRecon.
Last Modified: Feb. 24th, 2014. By ShadowRecon.
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

float getPointAngleRadians(TPoint P1, TPoint P2)
{
  return aTan2(P1.Y - P2.Y, P1.X - P2.X);
}

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
float getPointAngleDegrees(TPoint P1, TPoint P2)
Contributors: ShadowRecon.
Description: Returns angle in degrees between 2 TPoints.
Date Created: Feb. 24th, 2014. By ShadowRecon.
Last Modified: Feb. 24th, 2014. By ShadowRecon.
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

float getPointAngleDegrees(TPoint P1, TPoint P2)
{
  return Degrees(aTan2(P1.Y - P2.Y, P1.X - P2.X));
}

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
TPoint rotatePoint(TPoint p, float cx, float cy, float angle);
Contributors: ShadowRecon.
Description: Rotates point (p) around point (cx,cy) in radians (A).
Date Created: Feb. 24th, 2014. By ShadowRecon.
Last Modified: Feb. 24th, 2014. By ShadowRecon.
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

TPoint rotatePoint(TPoint p, float cx, float cy, float angle)
{
  TPoint Result;
  Result.X := round(cx + cos(angle) * (p.x - cx) - sin(angle) * (p.y - cy));  
  Result.Y := round(cy + sin(angle) * (p.x - cx) + cos(angle) * (p.y - cy));
  return Result;
}




