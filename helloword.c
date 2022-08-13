#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	printf("Hello World\n");
  	printf("%s",s); 
  	//In order to take a line as input, you can use scanf("%[^\n]%*c", s); where  is defined as char s[MAX_LEN] where
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
