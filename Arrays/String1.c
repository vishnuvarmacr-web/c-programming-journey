#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],rev[100];
    int i,j=0,vowel=0,consonants=0,palli=0;
    scanf("%s",str);
    printf("Length: %d\n",strlen(str));
    for(i=0;i<strlen(str);i++)
    {
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u')
        {
            vowel++;
        }
        else
            consonants++;
    }
    for(i=strlen(str)-1;i>=0;i--)
    {
        rev[j]=str[i];
        j++;
    }
    rev[j]='\0';
    printf("Vowel:%d\n",vowel);
    printf("Consonants:%d\n",consonants);
    printf("%s\n",rev);
    for(i=0;i<strlen(str);i++){
    if(rev[i]!=str[i]){
        palli=1;
        break;
    }
        
    }
    if(palli==0)
        printf("Pallindrome");
    else
        printf("Not a Pallindrome");
}