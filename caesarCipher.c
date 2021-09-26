#include <stdio.h>

void caesarCipher(char *message)
{
	while(*message != '\0')
	{
		int c =*message + 5;
		printf("%c", c);
		message++; 
	}
	printf("\n");


}

int main()
{
	printf("Original message is: ");
	char* message = "Hello Matthew\0";
	int i = 0;
	while (*(message+i) != '\0')
	{
		printf("%c", *(message+i));
		i++;
	}
	printf("\n");
	caesarCipher(message);





}
