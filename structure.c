#include<stdio.h>
#include<string.h>
struct details
{
	char name[25];
	char registration[15];
	char email[25];
	int marks;
};
int main()
{
	struct details student1;
	
	printf("enter student1.name=");
	scanf("%s",&student1.name);
	
	printf("enter student1.registration=");
    scanf("%s",&student1.registration);
    
    printf(" enter student1.email=");
	scanf("%s",&student1.email);
	
	printf("enter student1.marks=");
    scanf("%d",&student1.marks);
    
    
	return 0;
}