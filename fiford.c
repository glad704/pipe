#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd,retval;
	char buffer[8];
	fd = open("/home/gladson/Desktop/Practice/pipe/fifo",O_RDONLY);
	retval = read(fd,buffer,sizeof(buffer));
	fflush(stdin);
	write(1,buffer,sizeof(buffer));
	printf("\n");
	close(fd);
	return 0;
}
