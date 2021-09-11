#include<stdio.h>
#include<conio.h>

int main()
{   int i, n;
	char na[4]="N/A";
	struct customer{
		char name[20];
		int *ptr;
	} c[5];
	struct salesperson {
		char name[20];
	} s[3];
	clrscr();
	printf("Enter customer names: \n");
	for(i = 0; i < 5; i++)
		gets(c[i].name);

	printf("Enter salesperson names: \n");
	for(i = 0; i < 3; i++)
		gets(s[i].name);
	printf("Enter salesperson number against corresponding customers:\n");
	for(i = 0; i < 3; i++) {
		printf("%d. ", i+1);
		puts(s[i].name);
		//puts("\n");
	}
	for(i = 0; i < 5; i++) {
		printf("%s > ", c[i].name);
		scanf("%d", &n);
		if(n >= 1 && n <= 3)
		c[i].ptr = &(s[n-1].name);
		else c[i].ptr = &na;
	}
	printf("\nCUSTOMER RECORD: \n\n");
	printf("Customer  |  Salesperson\n________________________\n");
	for(i = 0; i < 5; i++) {
		printf("%-10s|  %s\n", c[i].name, c[i].ptr);
	}
	getch();
	return 0;
}
