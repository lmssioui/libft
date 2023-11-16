int main()
{
	char *str =ft_calloc(4, 0xFFFFFFFFFFFFFF);
	if (str == NULL)
	{
		return (0);
		free(str);
	}
	printf("the allocation is handled!");
}
