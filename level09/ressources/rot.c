#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int		main(int argc, char **argv)
{
	int fd;
	int i = 0;
	char	buf[1000];
	fd = open(argv[1], O_RDONLY);
	bzero(buf, 1000);
	read(fd, buf, 1000);
	while (buf[i])
	{
		buf[i] = buf[i] -i;
		i++;
	}
	printf("%s\n", buf);
}
