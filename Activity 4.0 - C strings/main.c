#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char name[50], conv;
    int i, len,v=0, c=0;
    printf("\n Input a sentence: ");
    fgets(name, sizeof(name), stdin); 
    printf("\nConverted String: ");
    len= strlen(name);
    for (i=0; i<len; i++)
    {
        if (name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]== 'u' ||
            name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]== 'U')
            {conv=toupper(name[i]); v++;}
        else
            {conv=tolower(name[i]);c++;}
        printf("%c",conv);    
    }
    
    printf("\nString Length= %d", len);
    printf("\nVowels = %d", v);
    printf("\nConsonants = %d", c);
    
    return 0;
}

