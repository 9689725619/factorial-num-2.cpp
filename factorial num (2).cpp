#include<stdio.h>
int main()
{

int num,fact=1,i;

printf("\n Enter the number");
scanf("%d",&num);
i=num;
while(i>=1){
	
	fact=fact*i;
	i--;
	
}
printf("the factorial of number %d  is %d", fact);
return 0;
}
