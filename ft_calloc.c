#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*c;

	c = malloc(count * size);
	if (c == 0)
		return (0);
	ft_bzero(c, (count * size));
	return (c);
}
