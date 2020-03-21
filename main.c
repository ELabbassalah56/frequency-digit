#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { 
     char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    char str[10]={'0','1','2','3','4','5','6','7','8','9'};   
    int count=0;
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<strlen(s);j++)
        {
            if(str[i]==s[j])
            {
                count=count+1;
            }
        }
        printf("%d ",count);
        count=0;
    }
    return 0;
}