#include<stdio.h>
#include<conio.h>
struct customer{
		char name[20];
		int *ptr;
	};
struct salesperson {
		char name[20];
	}; 
int main()
{   int i, n;
	char na[4]="N/A";
	struct customer c[5];
	struct salesperson s[3];
	clrscr();
	printf("Enter customer names: \n"); //Input customer names in structure array
	for(i = 0; i < 5; i++)
		gets(c[i].name);

	printf("Enter salesperson names: \n"); //Input salesperon names in structure array
	for(i = 0; i < 3; i++)
		gets(s[i].name);
	printf("Enter salesperson number against corresponding customers:\n");  //Display salespersons list
	for(i = 0; i < 3; i++) {
		printf("%d. ", i+1);
		puts(s[i].name);
		//puts("\n");
	}
	for(i = 0; i < 5; i++) {	//Assign salespersons to customers
		printf("%-10s >  ", c[i].name);
		scanf("%d", &n);
		if(n >= 1 && n <= 3)
		c[i].ptr = &(s[n-1].name); //storing salespersons in pointers of customer structure
		else c[i].ptr = &na;
	}
	printf("\nCUSTOMER RECORD: \n\n"); //Display the record of customer with their corresponding salespersons in tabular manner
	printf("Customer  |  Salesperson\n________________________\n");
	for(i = 0; i < 5; i++) {
		printf("%-10s|  %s\n", c[i].name, c[i].ptr);
	}
	getch();
	return 0;
}
