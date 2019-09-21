#include<stdio.h>

int salaman(int n)
	{
		if (n==0)
			return 0;
		else
			return (n-1) + salaman (n-1);
		
	}
	
int main()
{
	int n; 
	printf("Jumlah Orang = ");
	scanf("%d", &n);
    printf("Total salaman = %d", salaman(n)); 
    return 0; 
}
