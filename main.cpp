#include <stdio.h>

main() {
int a,b;
printf("A=");
	scanf("%i",&a);
	
printf("B=");
	scanf("%i",&b);

	if(a>b)
		{
			printf("A is greater");		
		}
	else
	{
		if(a==b){
			printf("A = B");
		}
		else{
			printf("B is greater");		
		}
	}
}
