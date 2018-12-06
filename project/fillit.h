/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femaury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 14:55:03 by femaury           #+#    #+#             */
/*   Updated: 2018/05/03 20:19:41 by femaury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define N_DPOS(n) (n != 4 && n != 9 && n != 14 && n != 19 && n != 20)
# define N_EPOS(n) (n == 4 || n == 9 || n == 14 || n == 19)
# define MAP_FIND(a, b) map[i[1] + ttab[a].posy[b]][i[2] + ttab[a].posx[b]]

typedef struct	s_tetris
{
	int		posx[3];
	int		posy[3];
	int		startx;
	int		starty;
}				t_tetris;

t_tetris		*ft_createttab(char **s, int nb);
char			**ft_createmap(size_t size);
char			**ft_fillmap(t_tetris ttab[], char **map, size_t size, int nb);
char			**ft_readfile(char *s);
int				ft_checkfile(char **s);

#endif
