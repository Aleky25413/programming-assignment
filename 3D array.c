//array
#include<stdio.h>
int main()
{
	int i,j,k;
	int sum;
	int marks[2][3]={ {{54,74,86},{38,76,82}},
                 	{{56,76,98},{54,76,98}} };
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<3;k++){

		
	printf("marks [%d][%d][%d]=%d\n",i,j,k,marks[i][j][k]);

			}
		}
}

	return 0;
	
}
