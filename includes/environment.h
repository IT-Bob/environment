/**
**	\file	environment.h
**	\author	Alexis Guérin
**	\date	8 janvier 2018
*/

#ifndef ENVIRONMENT_H
# define ENVIRONMENT_H

# include "libft.h"

char	**dupenv(const char **environment, int size);
int		find_var(const char *var, char **environment, int egal);
char	*ft_getenv(const char *name, char **environment);
char	**ft_setenv(char *new, char **environment);

#endif
