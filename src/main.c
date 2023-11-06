#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char const	*s1;
	char const	*set;
	char		*str;

	s1 = "set hello world!";
	set = "set";
	str = ft_strtrim(s1, set);
	printf("%s\n", str);
	return (0);
}
