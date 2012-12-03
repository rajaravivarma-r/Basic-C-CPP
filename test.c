#include <stdio.h>

#define print printf
void printAddressTest()
{
	char *str = "Hello\n";
	void* in;

	in = str;
	

	printf("%s",str);
	printf("%X", (unsigned int)in);

}


void integerOverloadTest()
{
	char i=127;

	i++;
	i++;
	printf("%d",i);	
}


void macroForPrintfTest()
{
	print("This string has been passed to a \"print\" function, but it still prints since a macro is defined");
}

int main()
{
	integerOverloadTest();
	return 0;
}



