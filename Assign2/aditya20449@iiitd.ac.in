
#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float mat1[2][2] = {{1,2},{3,4}};
	float mat2[2][2] = {{5,6},{7,8}};

	printf("Intial Matrix 1 \n");

	for (int i = 0; i <2 ; i++){
		for (int j = 0; j<2; j++)
		{
			printf("%lf ", mat1[i][j]);
			}
		printf("\n");
	}

	printf("\n");

	printf("Intial Matrix 2 \n");

	for (int i = 0; i <2 ; i++){
		for (int j = 0; j<2; j++)
		{
			printf("%lf ", mat2[i][j]);
			}
		printf("\n");
	}

	printf("\n");

	
	
	int res = syscall(451, mat1, mat2);

    	if(res < 0){
        	printf("ERROR! Could not perform system call.");
        	exit(1);

 	}


	printf("Final Matrix 1 \n");


	for (int i = 0; i <2 ; i++){
		for (int j = 0; j<2; j++)
		{
			printf("%lf ", mat1[i][j]);
			}
		printf("\n");
	}

	printf("\n");

	
	printf("Final Matrix 2 \n");

	for (int i = 0; i <2 ; i++){
		for (int j = 0; j<2; j++)
		{
			printf("%lf ", mat2[i][j]);
			}
		printf("\n");
	}

	printf("\n");

	return 0;
}
