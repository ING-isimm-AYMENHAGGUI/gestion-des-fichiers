// C program to illustrate
// read system Call
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
	char c;
	int fd1 = open("foo.txt", O_RDONLY, 0);
	int fd2 = open("sample.txt", O_RDONLY, 0);
	read(fd1, &c, 1);
	//read(fd2, &c, 1);
	printf("c = %c\n", c);
	exit(0);
}
