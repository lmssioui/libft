#include <stdio.h>
#include <fcntl.h>
int main() {
    int a = 145236;
    int b = 789564;
    char buffer[30];
    ssize_t bytes_read;

    int fd_write, fd_read;
    ssize_t bytes_written;

    // Open file for writing
    fd_write = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_write == -1) {
        perror("Error opening the file for writing");
        return 1;
    }

    // Write to the file
    ft_putnbr_fd(a, fd_write);
    write(fd_write, "\n", 1 );
    ft_putnbr_fd(b, fd_write);

    // Close the file after writing
    close(fd_write);

    // Open file for reading
    fd_read = open("test.txt", O_RDONLY);
    if (fd_read == -1) {
        perror("Error opening the file for reading");
        return 1;
    }

    // Read from the file
    bytes_read = read(fd_read, buffer, sizeof(buffer) - 1);
    if (bytes_read == -1) {
        perror("Error reading from the file");
        close(fd_read);
        return 1;
    }

    // Null-terminate the buffer for string printing
    buffer[bytes_read] = '\0';

    printf("Read from file: \n%s\n", buffer);

    // Close the file after reading
    close(fd_read);

    return 0;
}
