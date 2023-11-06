#include<stdio.h>
int main()
{
	char const *s1 = "set hello world!";
	char const *set = "set";
	char	*str;

	str = ft_strtrim(s1, set);
	printf ("%s\n", str);
	return (0);
}
