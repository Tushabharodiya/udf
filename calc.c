#include<stdio.h>
int calc(int a, int b)
{
	int num,i;
		
	for(num=0;num<=6;num++)
	{
		printf("Enter of choice = ");
		scanf("%d",&num);
			
			switch (num)
			{
				case 1:
					printf("Enter Value A = ");
					scanf("%d",&a);
					printf("Enter Value B = ");
					scanf("%d",&b);
					printf("A & B Addition Of = %d  \n\n",a+b);
					break;
				case 2:
					printf("Enter Value A = ");
					scanf("%d",&a);
					printf("Enter Value B = ");
					scanf("%d",&b);
					printf("A & B Substraction = %d  \n\n",a-b);
					break;
				case 3:
					printf("Enter Value A = ");
					scanf("%d",&a);
					printf("Enter Value B = ");
					scanf("%d",&b);
					printf("A & B Multiplication Of = %d \n\n",a*b);
					break;
				case 4:
					printf("Enter Value A = ");
					scanf("%d",&a);
					printf("Enter Value B = ");
					scanf("%d",&b);
					printf("A & B Division Of = %d \n\n",a/b);
					break;
				case 5:
					printf("Enter Value A = ");
					scanf("%d",&a);
					printf("Enter Value B = ");
					scanf("%d",&b);
					printf("A & B Mudulas Of = %d \n\n",a%b);
					break;
				case 6:
					printf("You Are Exited");
					break;
				default:
					printf("plz Enter given choice");	
			}
	}
}
void main()
{
		int a,b;
		printf("press 1 for Addition\n");
		printf("press 2 for Substraction\n");
		printf("press 3 for Multiplication\n");
		printf("press 4 for Division\n");
		printf("press 5 for Mudulas\n");
		printf("press 6 for exit\n\n");
	
	calc(a,b);
}