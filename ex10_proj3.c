// Remove the num_in_rank, num_in_suit, and card_exists array from the
// poker.c program of Section 10.5. Have the program store the cards in a 5x2 array in-
// stead. Each row of the array will represent a card. For example, if the array is named
// hand, then hand[0][0] will store the rank of the first card and hand[0][1] will store the 
// suit of the first card.
/* #include directives go here */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
/* #define directives go here */
#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
/* declarations of external variables go here */
bool straight, flush, four, three;
int pairs;	/* can be 0, 1, or 2 */

/* prototypes */
void read_cards(int hand[5][2]);
void analyze_hand(int hand[5][2]);
void print_result(void);

/**********************************************************
 * main: Calls read_cards, analyze_hand, and print_result *
 *					repeatedly.							  *
 * ********************************************************/
int main(void)
{
	int hand[5][2];
	for (;;) {
		read_cards(hand);
		analyze_hand(hand);
		print_result();
	}
}

/**********************************************************
 * read_cards: Reads the cards into external variables;	  *
 *				checks for bad cards and duplicate cards. *
 *	******************************************************/
void read_cards(int hand[5][2])
{
	bool card_exists[NUM_RANKS][NUM_SUITS];
	char ch, rank_ch, suit_ch;
	int rank, suit;
	bool bad_card;
	int cards_read = 0;


	while (cards_read < NUM_CARDS) {
		bad_card = false;

		printf("Enter a car: ");

		rank_ch = getchar();
		switch (rank_ch) {
			case '0':			exit(EXIT_SUCCESS);
			case '2':			rank = 0; break;
			case '3':			rank = 1; break;
			case '4':			rank = 2; break;
			case '5':			rank = 3; break;
			case '6':			rank = 4; break;
			case '7':			rank = 5; break;
			case '8':			rank = 6; break;
			case '9':			rank = 7; break;
			case 't':			rank = 8; break;
			case 'j':			rank = 9; break;
			case 'q':			rank = 10; break;
			case 'k':			rank = 11; break;
			case 'a':			rank = 12; break;
			default:			bad_card = true;
		}
	}
	suit_ch = getchar();
	switch (suit_ch) {
		case 'c': case 'C': suit = 0; break;
		case 'd': case 'D': suit = 1; break;
		case 'h': case 'H': suit = 2; break;
		case 's': case 'S': suit = 3; break;
		default:			bad_card = true;
	}
	while ((ch = getchar()) != '\n') {
		if (ch != ' ') bad_card = true;
	}

	if (bad_card) {
		printf("Bad card; ignored.\n");
	} else if (card_exists[rank][suit]) {
		printf("Duplicate card; ignored.\n");
	} else {
		hand[cards_read][0] = rank;
		hand[cards_read][1] = suit;
		cards_read++;
	}
}





/**********************************************************
 * analyze_hand: Determines whether the hand contains a	  *
 *				 straight, a flush, four-of-a-kind,		  *
 *				 and/or three-of-a-kind; determines the   *
 *				 number of pairs; stores the results into *
 *				 external variables.					  *
 *********************************************************/
void analyze_hand(int hand[5][2])
{
	int num_consec = 0;
	int card, rank, matches;

	straight = false;
	flush = false;
	four = false;
	three = false;
	pairs = 0;

	/* selection sort */
	int i, j, smallest, temp_suit, temp_rank;
	for (i = 0; i < NUM_CARDS; i++) {
		smallest = i; 
		for (j = i + 1; j < NUM_CARDS; j++)
			if (hand[j][0] < hand[smallest][0]) {
				smallest = j;
			}

		temp_rank	= hand[i][0];
		temp_suit	= hand[i][1];
		hand[i][0]  = hand[smallest][0];
		hand[i][1]	= hand[smallest][1];
		hand[smallest][0] = temp_rank;
		hand[smallest][1] = temp_suit;
	}

	/* check for flush */
	for (card = 1; card < NUM_CARDS; card++) {
		if (hand[card][1] != hand[0][1]) {
			break;
		} 
		if (card == NUM_CARDS - 1) {
			flush = true;
		}
	}

	/* check for straight */
	rank = 0;
	while (card[rank] == 0) rank++;
	for (; rank < NUM_RANKS && a[rank] > 0; rank++) {
		num_consec++;
	} 
	if (num_consec == NUM_CARDS) {
		straight = true;
		return ;
	}

	/* check for 4 of a kin, 3 of a kind an pairs */
	for (rank = 0; rank < NUM_RANKS; rank++) {
		if (a[rank] == 4) four == true;
		if (a[rank] == 3) three == true;
		if (a[rank] == 2) pairs++;
}

}

/*********************************************************
 * print_result: Notifies the user of the result, using  *
 *			 	 the external variables set by			 *
 *			 	 analyze_hand.							 *
 *********************************************************/
void print_result(void)
{
	if (straight && flush) printf("Straight flush");
	else if (four)		   printf("Four of a kind");
	else if (three &&
			pairs == 1)	   printf("Full house");
	else if (flush)		   printf("Flush");
	else if (straight)	   printf("Straight");
	else if (three)		   printf("Three of a kind");
	else if (pairs == 2)   printf("Two pairs");
	else if (pairs == 1)   printf("Pair");
	else				   printf("High card");

	printf("\n\n");
}

