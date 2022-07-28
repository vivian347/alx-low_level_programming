#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int fp1, fp2, fp1_close, fp2_close, r, w;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Error: \n");
		exit(97);
	}
	fp1 = open(argv[1], O_RDONLY);
	if (fp1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: \n");
		exit(98);
	}
	fp2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fp2 == -1)
	{
		 dprintf(STDERR_FILENO, "Error: \n");
		 exit(99);
	}
	while ((r = read(fp1, buf, 1024)) > 0)
	{
		w = write(fp2, buf, r);
		if (w != r)
		{
			 dprintf(STDERR_FILENO, "Error:");
			 exit(99);
		}
	}
	if (r == -1)
	{
		 dprintf(STDERR_FILENO, "Error: ");
		 exit(98);
	}
	fp1_close = close(fp1);
	if (fp1_close != 0)
	{
		 dprintf(STDERR_FILENO, "Error:");
		 exit(100);
	}
	fp2_close = close(fp2);
	if (fp2_close != 0)
	{
		dprintf(STDERR_FILENO, "Error:");
		exit(100);
	}
	return (0);
}
