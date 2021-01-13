#include <stdio.h>
#include <string.h>

int main() {
	char chr = 'a';
	char str1[26];
	for (int i = 0; i < 26; i++)
	{
		char g = chr + i;
		str1[i] = g;
	}
	str1[26] = '\0';
	printf("str1: %s\n", str1);

	char str2[] = "abcdefghijklmnopqrstuvwxyz";
	printf("str2: %s\n", str2);

	if (strcmp(str1, str2) == 0)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are different\n");

	for (int i = 0; i < 26; i++)
	{
		str1[i] -= 32;
	}
	printf("new str1: %s\n", str1);

	if (strcmp(str1, str2) == 0)
                printf("str1 and str2 are same\n");
        else
                printf("str1 and str2 are different\n");

	char str3[52];
	strcpy(str3, str1);
	strcat(str3, str2);

	printf("final str1: %s\n", str1);
	printf("final str2: %s\n", str2);
	printf("final str3: %s\n", str3);
}
