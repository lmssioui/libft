#include <stdio.h>
void *my_function(unsigned int i, char *s)
{
	printf("%c\n",s[i]);
}
int main()
{
	char *s = "abdellatif";
	ft_striteri(s, my_function(7, s));
}
