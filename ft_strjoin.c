#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	x;
	size_t	j;

	x = 0;
	y = 0;
	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	while (s[x])
	{
		if (x >= start && y < len)
		{
			str[y] = s[x];
			y++;
		}
		x++;
	}
	str[y] = '\0';
	return (str);
}