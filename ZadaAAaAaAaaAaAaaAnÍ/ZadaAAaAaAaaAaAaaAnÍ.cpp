#include <stdio.h>

int main(void) 
{
	int i = 0;
	int sudy = 0;
	int lichy = 0;
	printf("Napiste libovolne cislo: \n");
	scanf("%d", &i);
	for (int j = 0; j <= i; j++) 
	{
		if (j % 2 == 0) {
			sudy += j;
		}
		else (j % 2 != 0); {
			lichy += j;
		}

	}
	printf("soucet sudych cisel je: %d\n", sudy);
	printf("soucet lichych cisel je: %d\n", lichy);
}

