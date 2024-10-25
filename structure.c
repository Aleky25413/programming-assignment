#include<stdio.h>
#include<string.h>

struct student
{
char name[25];
char reg[15];
int ID;
int year;
};
int main()
{
	struct student ALEX;
	strcpy(ALEX.name,"ALEX");
	strcpy(ALEX.reg,"PA107/G/22514\24");
	ALEX.ID=435627;
    ALEX.year=1;
	
	printf("name: %s\n",ALEX.name);
		printf("reg:  %s\n",ALEX.reg);
			printf("ID :%d\n",ALEX.ID);
				printf("year: %d\n",ALEX.year);
				
				return 0;
}

