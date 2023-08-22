#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int i, j = 0, len;
	char *rev, *s;

	rev = (char*) malloc(len * sizeof(char));
	s = (char*) malloc(len * sizeof(char));

	s = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	len = strlen(s);
	i = len;
	rev = (char*) malloc(len * sizeof(char));
	for (i = len - 1; i >= 0; i--)
	{
		rev[j] = s[i];
		j++;
	}
	puts(rev);
	
}