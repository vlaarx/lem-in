#include "libft.h"

char		*ft_strcjoin(char const *s1, char const *s2, char c)
{
	char	*tmp;
	char	*str;

	tmp = NULL;
	str = NULL;
	if (s1 && s2)
	{
		if (!(tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1 + 1))))
			return (NULL);
		tmp = ft_strcpy(tmp, s1);
		tmp[ft_strlen(s1)] = c;
		tmp[ft_strlen(s1) + 1] = '\0';
		str = ft_strjoin(tmp, s2);
		free(tmp);
		return (str);
	}
	return (NULL);
}
