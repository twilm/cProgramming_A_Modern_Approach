// finds smallest and largest in series of words. 
// After user enters a word, the program will determine
// which words would come first and last if the words were listed
// in dictionary order. The program must stop accepting input
// when user enter 4 letter word
#include <stdio.h>
#include <string.h>

#define MAX_WORD 30
#define FOUR_LETTER_WORD 4

int read_line(char str[], int n);

int main(void)
{
	/* comparison arrays */
	char smallest_word[MAX_WORD], largest_word[MAX_WORD];
	/* input array */
	char word[MAX_WORD];

	/* infinite loop	
	 *		stops if len of word enter is 4 */
	for (;;)
	{
		printf("Enter a word: ");
		scanf("%s", word);

		if (strlen(word) == 4) {
				} if (strcmp(word, smallest_word) < 0) {
				strcpy(smallest_word, word);
					break;
				} else if (strcmp(word, largest_word) > 0) {
					strcpy(largest_word, word);
					break;
				} else { 
					break;
				}
		if (strcmp(word, smallest_word) < 0) {
			strcpy(smallest_word, word);
		} else if (strcmp(word, largest_word) > 0) {
			strcpy(largest_word, word);
		}
		
	}
	printf("%s ", largest_word);
	printf("is the largest word\n");
	printf("%s ", smallest_word);
	printf("is the smallest word\n");
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n') {
		ch = getchar();
		if (i < n)
			str[i++] = ch;
	} 
	str[i] = '\0';
	return i;
}
