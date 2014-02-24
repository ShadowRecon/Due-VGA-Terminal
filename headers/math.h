#include <math.h>

#define PI 3.14159265359

const unsigned long PID180 = PI/180; 
const unsigned long 180DPI = 180/PI;

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
float degrees(float Radians)
Contributors: ShadowRecon.
Description: Returns radians in degrees.
Date Created: Feb 24th, 2014. By ShadowRecon.
Last Modified: Feb 24th, 2014. By ShadowRecon.
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

float degrees(float Radians)
{
  return ((180DPI) * Radians);
}

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
float radians(floar Degrees)
Contributors: ShadowRecon.
Description: Returns degrees in radians.
Date Created: Feb 24th, 2014. By ShadowRecon.
Last Modified: Feb 24th, 2014. By ShadowRecon.
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

float radians(floar Degrees)
{
  return ((PID180) * Degrees);
}
