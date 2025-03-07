#include "libft.h"

int	ft_isblank(char c)
{
	if ((c >= 9 && c <= 13) || 32)
		return (1);
	else
		return (0);
}