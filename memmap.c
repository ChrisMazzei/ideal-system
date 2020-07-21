#include <stdio.h>
/*
 * int main(int argc, char **argv) {
	int i;
	int j;

	int x = 15;
	int *p = &x;
	printf("p=%p\n", p);
	printf("arg 2 is=%x\n", argv[2]);
	for(i=1; i<argc; i++) {
		j=0;
		while(argv[i][j] != '\0')
			printf("%p\n", &argv[i][j++]);
			//printf("Arg %d is %d : %c\n", i,j,argv[i][j++]);
		if(argv[i][j] == '\0')
			printf("%pfornull\n", &argv[i][j]);
			//printf("\\0\n");
			//printf("Arg %d is %d : %c\n", i, j,argv[i][j++]);	
	}
	return 0;
}
*/

int main(int argc, char **argv) {
	printf("--\t--\t--\t--\n");
	printf("--\t--\t--\t--\n");

	int val=argv;

	int count=0;
	int i;
	for(i=1; i<argc; i++) {
		int j=0;
		while(argv[i][j] != '\0') {
			if(count == 4) {
				printf("\n");
				count = 0;
			}
			printf("%c\t", argv[i][j++]);
			count++;
		}
		if(count == 4) {
			printf("\n");
			count = 0;
		}
		if(argv[i][j] == '\0') {
			printf("\\0\t");
			count++;
		}
	}
	while(count++ < 4)
		printf("-- \t");
	printf("\n");	
	printf("--\t--\t--\t--\n");
	printf("--\t--\t--\t--\n");

	argv++;
	while(*argv) {
		char str[100];		
		sprintf(str, "%x", argv);
		int i=0;
		while(str[i] != '\0') {
			printf("%c", str[i++]);
			if(i % 2 == 0) printf("\t");
		}		
		printf("\n");
		argv++;
		printf("--\t--\t--\t--\n");
	}


	printf("--\t--\t--\t--\n");
	printf("--\t--\t--\t--\n");
	printf("--\t--\t--\t--\n");

	if(argc < 10)
		printf("00\t00\t00\t0%x\n", argc);
	else
		printf("00\t00\t00\t%x\n", argc);
	//printf("%x\n", val);

	char str[100];
	sprintf(str, "%x\n", val);

	i=0;
	while(str[i] != '\0') {
		printf("%c", str[i++]);
		if(i % 2 == 0) printf("\t");
	}

	printf("\n");
	return 0;
}
