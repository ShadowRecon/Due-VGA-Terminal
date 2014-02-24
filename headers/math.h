#include <math.h>

#define PI 3.14159265359

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
float degrees(float Radians)
Contributors: ShadowRecon.
Description: Returns radians in degrees.
Date Created: Feb 24th, 2014. By ShadowRecon.
Last Modified: Feb 24th, 2014. By ShadowRecon.
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

float degrees(float Radians)
{
  return ((180/PI) * Radians);
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
  return ((PI/180) * Degrees);
}
