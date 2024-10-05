#include<stdio.h>
int main(){
	float age,annual_income;
	printf("enter age=");
	scanf("%f",&age);
	printf("enter annual_income=");
	scanf("%f",&annual_income);
	
	if(age>=21)
	{
		printf("you qualify");
}
	else if(annual_income>=21000)
	{
		printf("you qualify");
		}
	else
	{
	printf("not qualified");
	}
	return 0;
}