#include <stdio.h>
#include <string.h>

int main(void)
{
	int len;
	char phrase[20];
	printf("Enter input string: ");
	gets(phrase);
	len = strlen(phrase);
	puts(phrase);

for(int i = 0; i < len-1; i++){     //loops (length of sphrase)-2 number of times, shifts array elements by 1 in every loop
        int i3;    
        
        for(i3 = len - 1; i3 > 0; i3--){    
            phrase[i3] = phrase[i3-1];   
        }    
  									    
        phrase[i3] = ' ';			    
        puts(phrase);
    }
    return 0;
}
