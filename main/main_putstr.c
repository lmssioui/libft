#include <stdio.h>
#include <fnctl.h>
#include <unistd.h>
int main()
{
	char *s = "1337 best school!!!!!!!!";
	char	buffer[ft_strlen(s) + 1];
	int	 fd_write, fd_read;
	size_t bytes_read;

	fd_write = open("putstr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putstr_fd(s,fd_write);
	close(fd_write);
	fd_read = open("putstr.txt", O_RDONLY);
	bytes_read = read(fd_read, buffer, sizeof(buffer) - 1);
	buffer[bytes_read] = '\0';
	printf("read frome file:%s\n",buffer);
	close(fd_read);
	return 0;
}

