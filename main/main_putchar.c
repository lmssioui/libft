#include <stdio.h>
#include <fcntl.h>
int main()
{
	char c = 'M';
	char buffer[2];
	size_t bytes_read;
	int fd_write,fd_read;

	fd_write = open("putchar.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putchar_fd(c, fd_write);
	close (fd_read);
	fd_read = open("putchar.txt", O_RDONLY);
	bytes_read = read (fd_read, buffer, sizeof(buffer) - 1);
	buffer[bytes_read] = '\0';
	printf("Read frome file : %s\n", buffer);
	close (fd_read);
	return 0;
}
