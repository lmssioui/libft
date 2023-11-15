#include<fcntl.h>
#include<stdio.h>
int main()
{
	char *s = "abdellatif";
	char buffer[15];
	char fd_write, fd_read;
	size_t bytes_read;

	fd_write = open("putendl.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putendl_fd(s,fd_write);
	close(fd_write);
	fd_read = open("putendl.txt", O_RDONLY);
	bytes_read = read(fd_read, buffer, sizeof(buffer) - 1);
	buffer[bytes_read] = '\0';
	printf("Read from file: %s", buffer);
	close(fd_read);
	return 0;
}
