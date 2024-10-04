//program to print library
/*
Author: Alexander 
Reg no.:PA107/G/22514/24
*/

#include<stdio.h>
#include <math.h>
int main()
{
int bookID,duedate,returndate,overdue;
float fineamount,duration;
 
printf("enter bookID=");
scanf("%d",&bookID); 
printf("enter duedate=\n");
scanf("%d",&duedate);
printf("enter returndate=\n");
scanf("%d",&returndate);
	
overdue=returndate-duedate;

if(overdue<=7)
{
printf("enter ksh 20");
}
else if(overdue<=14)
{
	printf("enter ksh 50");
}
else if(overdue>=15)
{
	printf("enter ksh 100");
}
if(overdue>0)
{
	fineamount=overdue*duration;
}
printf("fineamount:ksh%.2lf\n",fineamount);

return 0;

}