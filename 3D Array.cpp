#include<stdio.h>

int main()
{
	int ar[3][3];
	int i = 0;
	int j = 0;
	int sum = 0;
	
	//Entering values for the matrix
	
	printf("Enter 9 elements for the matrix \n------------------------------------- \n");
	for (i = 0; i<3; i++)
	{
		for (j=0; j < 3; j++)
		{
			scanf("%d", *(ar + i) + j);
		}
	}
	printf("The matrix given is : \n------------------------------------- \n");
	
	//Displaying the obtained matrix
	
	for (i = 0; i<3 ; i++)
	{
		for (j = 0; j< 3; j++)
		{
			printf("%d\t", *(*(ar + i) + j));
		}
		printf("\n");
	}
	
	//Finding the sum of the diagonal elements where i = j
	
	for (i=0; i < 3; i++)
	{
		for (j = 0; j<3; j++)
		{
			if(i==j)
			{
				sum += *(*(ar + i)+j);
			}
		}
	}
	printf("------------------------------------- \n");
	printf("The sum of the diagonal elements is : %d", sum);
	return 0;
	
}
