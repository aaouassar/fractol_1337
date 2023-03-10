/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:24:47 by aaouassa          #+#    #+#             */
/*   Updated: 2023/01/10 20:17:13 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include <math.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct colors{
	int	red;
	int	green;
	int	blue;
	int	color;
}	t_colors;

typedef struct s_data{
	void			*img;
	char			*addr;
	void			*mlx;
	void			*mlx_win;
	int				bits_per_pixel;
	int				line_length;
	int				endian;				
	double			x;
	double			y;
	double			o_x;
	double			o_y;
	double			i;
	double			save;
	unsigned int	iter;
	unsigned int	max_iter;
	double			z_x;
	double			z_y;
	double			c_x;
	double			c_y;
	int				ana;
}	t_var;

int		ft_close(t_var *in);
int		mouse_hook(int keycode, int x, int y, t_var *s_var);
int		ft_cross(int keycode, t_var *in);
void	my_mlx_pixel_put(t_var *data, int x, int y, int color);
void	origine(t_var *s_var, int x, int y);
void	check_up(int cnt, char **s);
void	ft_lead(void);
void	ft_mandelbrot(t_var *s_var);
void	ft_julia(t_var *s_var);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_minilbx(t_var *img, char **argv);
void	ft_clc(t_var *s_var);
void	ft_calcul(t_var *s_var);
void	ft_fract(t_var *s_var);

#endif