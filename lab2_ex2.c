#include <stdio.h>
#include <string.h>


int main(void)
{
	FILE *fp;
	int len;
	char phrase[20];
	printf("Enter input string: ");
	scanf("%[^\n]s",phrase);
	len = strlen(phrase);
	fp = fopen("output.txt","w");
	fputs(phrase,fp);
	puts(phrase);
	fclose(fp);

for(int i = 0; i < len-1; i++){     
        int i3, end;
		end = phrase[len-1];    
        
        for(i3 = len - 1; i3 > 0; i3--){    
            phrase[i3] = phrase[i3-1];   
        }    
  									    
        phrase[i3] = end;			    
        puts(phrase);
        fp = fopen("output.txt","a");
        fputc('\n',fp);
        fputs(phrase,fp);
        fclose(fp);
    }
    
    return 0;
}

