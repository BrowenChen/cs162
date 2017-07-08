#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *ifp, *ofp;
	char *mode = "r";
	char outputFilename[] = "output.txt";
	char ch;
	int linecount, wordcount, charcount;

	linecount = 0;
	wordcount = 0;
	charcount = 0;
	
    	for(int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}

	ifp = fopen(argv[1], mode);

	if (ifp == NULL) {
		fprintf(stderr, "Can't open input file text.\n");
		exit(1);
	} else {
		for (ch = getc(ifp); ch != EOF; ch = getc(ifp)) {
			if (ch != ' ' && ch != '\n') {++charcount; }
			if (ch == ' ' && ch != '\n') {++wordcount; }
			if (ch == '\n') {++linecount; }
		}
	}
	ofp = fopen(outputFilename, "w");
	
	if (ofp == NULL) {
		fprintf(stderr, "Can't open output file text.\n");
		exit(1);
	} else {
		fprintf(ofp, "Lines : %d \n", linecount);
		fprintf(ofp, "Words: %d \n", wordcount);
		fprintf(ofp, "Characters: %d \n", charcount);
	}

	
	printf( "Lines : %d \n", linecount);
	printf( "Words: %d \n", wordcount);
	printf( "Characters: %d \n", charcount);

	fclose(ifp);
	fclose(ofp);
	return 0;
}
