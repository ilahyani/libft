#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	char	*str;

	str = (char *) malloc (sizeof(s1) + sizeof(s2));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i++])
		str[i] = s1[i];
	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
#include<stdio.h>

int	main() {
	char	s1[5] = "qwert";
	char	s2[5] = "yuiop";
	printf("%s", ft_strjoin(s1, s2));
}
