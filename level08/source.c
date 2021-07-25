#include <stdio.h>
#include <sys/stat.h>

void	log_wrapper(FILE *fd, char *message, char *filename)
{
	char	write[264];

	strcpy(write, message);
	strlen(message);
	strlen(filename);
	snprintf(&write[strlen(write)], 254 - strlen(filename), filename);
	write[strcspn(write, '\n')] = 0; 
	fprintf(fd, "LOG: %s\n", write);
}

int		main(int argc, char **argv)
{
	FILE	*log;
	FILE	*file;
	FILE	*backup;
	char 	path[64];

	if (argc != 2)
	{
		printf("Usage: %s filename\n", argv[0]);
	}
	if ((log = fopen("./backups/.log", "w")) == 0)
	{
		printf("ERROR: Failed to open %s\n", "./backups/.log");
		exit(1);
	}
	log_wrapper(log, "Starting back up: ", argv[1]);
	if ((file = fopen(argv[1], "r")) == 0)
	{
		printf("ERROR: Failed to open %s\n", argv[1]);
		exit(1);
	}
	path = "./backup";
	strncat(path, argv[1], 99 - strlen(argv[1]));
	if ((backup == open(path, 0xc1 , S_IRUSR | S_IRGRP)) == 0)
	{
		printf("ERROR: Failed to open %s%s\n", "./backup", argv[1]);
		exit(1);
	}
	if (fgetc(file) != -1)
	{

	}
} 