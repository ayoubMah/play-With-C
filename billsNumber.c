# include <stdio.h>

int main(void)
{
	int bills20, bills10, bills5 , bills1 , x;
	printf("Enter the Dollars amount : \n");
	scanf("%d" , &x);

	bills20 = x / 20 ;
	bills10 = (x - (20 * bills20)) / 10 ;
	bills5 = (x - ((20 * bills20)+(10 * bills10))) / 5 ;
	bills1 = (x - ((20 * bills20)+(10 * bills10)+(5 * bills5))) ;


	printf("the amount $%d =  \n" , x);

	printf("%d bills of 20$  \n" , bills20);
	printf("%d bills of 10$  \n" , bills10);
	printf("%d bills of 5$  \n" , bills5);
	printf("%d bills of 1$  \n" , bills1);

	return 0 ;
}
