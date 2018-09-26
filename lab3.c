#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>
#define M 52
#define N 52
int main()
{
	int in, im;

im = 0;
	int NumOfPlayers;
	int CheckCondition=0;
	int RemainingDeck=52;
	int NumOfCards;
	int RandNumber[52];
	char ShuffledCards[52][4];
	int CheckIfValid;
	int Player[52];
	char CardsPerPlayer[52][4];
	char temp[4];
	
	char StandardDeck[52][4]={{'A','H','\0'},{'2','H','\0'},{'3','H','\0'},{'4','H','\0'},{'5','H','\0'},{'6','H','\0'},
			{'7','H','\0'},{'8','H','\0'},{'9','H','\0'},{'1','0','H','\0'},{'J','H','\0'},{'Q','H','\0'},{'K','H','\0'},
								{'A','D','\0'},{'2','D','\0'},{'3','D','\0'},{'4','D','\0'},{'5','D','\0'},{'6','D','\0'},
			{'7','D','\0'},{'8','D','\0'},{'9','D','\0'},{'1','0','D','\0'},{'J','D','\0'},{'Q','D','\0'},{'K','D','\0'},
					{'A','C','\0'},{'2','C','\0'},{'3','C','\0'},{'4','C','\0'},{'5','C','\0'},{'6','C','\0'},{'7','C','\0'},
					{'8','C','\0'},{'9','C','\0'},{'1','0','C','\0'},{'J','C','\0'},{'Q','C','\0'},{'K','C','\0'},
							{'A','S','\0'},{'2','S','\0'},{'3','S','\0'},{'4','S','\0'},{'5','S','\0'},{'6','S','\0'},
					{'7','S','\0'},{'8','S','\0'},{'9','S','\0'},{'1','0','S','\0'},{'J','S','\0'},{'Q','S','\0'},{'K','S','\0'}};
	
	
	printf("Enter the number of players: ");
	scanf("%d", &NumOfPlayers);
	//int Player[NumOfPlayers];
	printf("Enter the number of cards per player: ");
	scanf("%d", &NumOfCards);
	//int CardsPerPlayer[NumOfCards];

	

	
	/*for(int i=0; i<52; i++){
	
		printf("%s\n", StandardDeck+i);
	}*/
	

srand(time(NULL));
for (in = 0; in < N && im < M; ++in) {
  int rn = N - in;
  int rm = M - im;
  //srand(time(NULL));
  if (rand() % rn < rm)    
    /* Take it */
    RandNumber[im++] = in + 1; /* +1 since your range begins from 1 */
	
}

//srand(time(NULL));
for (int i = 51; i >= 0; --i){
    //generate a random number [0, n-1]
    int j = rand() % (i+1);

    //swap the last element with element at random index
    int temp = RandNumber[i];
    RandNumber[i] = RandNumber[j];
    RandNumber[j] = temp;
}

assert(im == M);
/*for(int i=0; i<52; i++){
printf("%d\n", vektor[i]);
}*/
	/*for(int i=0; i<52; i++){
		//printf("I was here");
	printf("%s\n", StandardDeck+RandNumber[i]);
	}*/
	CheckIfValid = NumOfCards*NumOfPlayers;
	if (CheckIfValid<53)
	{
		for(int i=0; i<NumOfCards; i++)
		{
			printf("\nPlayer: %d has the following cards:\n", ++i);
			
			for(int n=0; n<RemainingDeck; n+=NumOfPlayers){
			
			if(CheckCondition<NumOfCards){
			//int Player[i]=StandardDeck+n;
			//temp = StandardDeck+n;
		//strncpy(CardsPerPlayer+count, StandardDeck+n, 1);
		
		printf("%s, ", StandardDeck+RandNumber[n]+n);
			
			RemainingDeck--;
			CheckCondition++;
			}
		}
		}
	}
	/*for(int i=1; i<NumOfPlayers+1; i++){
		printf("\nPlayer: %d has following cards:\n", i);
		for (int n=0; n<NumOfCards; n++){
	printf("%s, ", CardsPerPlayer+n);
	
	}}*/
}