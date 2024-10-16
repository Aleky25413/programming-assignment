//array 2D
#include<stdio.h>
int main()
{
	int i,j,sum;
	int prices[2][3]={{10,20,30},
	                  {40,50,60}};
	 for(i=0;i<2;i++){
	  for(j=0;j<3;j++){
	printf("prices[%d][%d]=%d\n",i,j,prices[i][j]);	
	  }
	}
	return 0;
	
}