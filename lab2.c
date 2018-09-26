/* PROGRAM:  CST8234 - C-Programming
   AUTHOR:  Hunardeep Sandhu
   DATE:   21 SEP 2018
   PURPOSE: Lab 01
   LEVEL OF DIFFICULTY: 2
   CHALLENGES:	Converting decimals to ASCII
   HOURS SPENT:	4         
*/

#include<stdio.h>
int main()
{
	char phoneNumber[100];
	int finalDisplay[7];
	int counter;
	int confirmStatus;
	int userInputChar;
	int compareArray[10] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	do
	{
		counter=0;
		confirmStatus=0;
		userInputChar=0;
		printf("Enter your phone number\n");
		scanf("%s", phoneNumber);
		printf("You entered\n%s\n", phoneNumber);
		while(phoneNumber[userInputChar] != '\0')
		{
			counter++;
			userInputChar++;
		}
		if(counter==1)
		{
			if (phoneNumber[0]==48)
			{
				printf("Have a nice Day!\n");
				return 0;
			}
		}
		if(counter==7)
		{
			int i;
			int n;
			for(i=0; i<7; i++)
			{
				for(n=0; n<10; n++)
				{
					if(phoneNumber[i] == compareArray[n])
					{
						finalDisplay[i]=compareArray[n];
						confirmStatus++;
					}
				}
			}
		}
		else
		{
			printf("Valid Phone must have 7 integers\n");
		}
		if(confirmStatus==7)
		{
			int i;
			int n;
			for(i=0; i<7; i++)
			{
			int count=0;
				for(n=48; n<58; n++)
				{
					if(finalDisplay[i]==n)
					{
						phoneNumber[i] = count;
					}
					else
					{
						count++;
					}
				}
			}
		if((phoneNumber[0]==0) || (phoneNumber[0]==1))
		{
			printf("First digit can't be 0 or 1\n");
		}
		else
		{
			printf("The phone Number entered\n%d%d%d-%d%d%d%d\n",phoneNumber[0], phoneNumber[1], phoneNumber[2], phoneNumber[3], 
			phoneNumber[4], phoneNumber[5], phoneNumber[6]);}
		}
		else
		{
			printf("Please enter a valid phone number\n");
		}
	
	}while((phoneNumber[0] != 48)||(counter != 7));
return 0;
}