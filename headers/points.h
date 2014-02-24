#include "Arduino.h"

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
TPoint point(int x; int y);
Contributors: ShadowRecon.
Description: Creates a TPoint from x and y.
Date Created: June 3rd, 2013. By ShadowRecon.
Last Modified: June 3rd, 2013. By ShadowRecon.
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=}

int Distance(int X1, int Y1, int X2, int Y2)
{
  return sqrt(pow(X2-X1, 2) + pow(X2-X1, 2);
}
