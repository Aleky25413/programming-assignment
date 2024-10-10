//program to print library
/*
Author: Alexander 
Reg no.:PA107/G/22514/24
*/

#include<stdio.h>

int main()
{
int bookID,duedate,returndate,overdue;
float fineamount;
 
printf("enter bookID=");
scanf("%d",&bookID); 
printf("enter duedate=");
scanf("%d\n",&duedate);
printf("enter returndate=");
scanf("%d",&returndate);
	
overdue=returndate-duedate;
if(overdue<=0)
{
printf("fineamount=0.0");
}

else if(overdue<=7)
{
printf("fineamount=overdue*20");
}
else if(overdue>7&& overdue<15)
{
	printf("fineamout=overdue*50");
}
else 
{
	printf("fineamount=overdue*100");
}



printf("enter bookID=");
printf("enter duedate=\n");
printf("enter returndate=\n");
printf("fineamount:ksh%.2lf\n",fineamount);	
return 0;

}
