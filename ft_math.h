/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:23:14 by samusanc          #+#    #+#             */
/*   Updated: 2024/08/14 15:33:57 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H
# define PI 3.1415926535
# define DR 0.0174533
# include <stdlib.h>
# include <math.h>
# include <limits.h>
# include "Q_sqrt.h"

float	deg2Rad();

float	fx_cos(float angle);
float	fx_sin(float angle);

float	fx_angle(float angle);

long double	ft_abs(long double n);

#endif
