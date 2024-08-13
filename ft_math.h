#ifndef FT_MATH_H
# define FT_MATH_H
# include <stdlib.h>
# include <math.h>
# define PI 3.1415926535
# define DR 0.0174533
# include <limits.h>
# include <float.h>
# include "Q_rsqrt.h"

float	deg2Rad();

float	fx_cos(float angle);
float	fx_sin(float angle);

float	fx_angle(float angle);

long double	ft_abs(long double n);

#endif
