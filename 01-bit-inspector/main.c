#include <stdio.h>

int main(){
	unsigned int num = 0;
	printf("Enter in a random non negative number: ");
	scanf("%i",&num);

	printf("Decimal : %i \n",num);
	printf("Hexadecimal : 0x%x \n",num);

	printf("32 bit Binary : ");
	for(int i = 31,count = 1; i >=0; i--,count++){

		unsigned mask = (1 << i); //0x80000000
		printf("%c", (num & mask) ? '1' : '0');

		if(count == 4){
			printf(" ");
			count = 0;
		}
	}

	int bit_pos = 0;
	printf("\nEnter in a bit position (0 - 31) : ");
	scanf("%i", &bit_pos);
	unsigned mask = (1<<bit_pos);
	printf("\nBit %i %s",bit_pos,(num & mask ? "is set (1)":"is not set (0)"));

	printf("\nThe result of \"value & (1u << position)\": \n");
	printf("Decimal : %i \nHexadecimal : 0x%x",(num & mask), (num & mask));

	printf("\nEnter in a bit position (0 - 31) again: ");
	scanf("%i",&bit_pos);
	printf("Set :\tNum : %i , Hexadecimal : 0x%x , Binary : 0b%b\n",num | (1<<bit_pos),num | (1<<bit_pos),num | (1<<bit_pos));
	printf("Clear :\tNum : %i , Hexadecimal : 0x%x , Binary : 0b%b\n",num & ~(1<<bit_pos),num & ~(1<<bit_pos),num & ~(1<<bit_pos));
	printf("Toggle :\tNum : %i , Hexadecimal : 0x%x , Binary : 0b%b\n", num ^ (1<<bit_pos),num ^(1<<bit_pos),num ^(1<<bit_pos));

	return 0;
}
