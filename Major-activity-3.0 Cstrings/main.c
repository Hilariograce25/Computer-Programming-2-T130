#include <stdio.h> 
#include <string.h> 

int main() 
{ 
    char string[100]; 
    int length, a; 
    
    printf("Enter any string: "); 
    fgets(string, sizeof(string), stdin); 
    
    length = strlen(string)-1;
    printf("Reverse order words: \n");
    for(a=length; a>=0; a--)
    {
        if (string[a] == ' ')
        {
            string[a]='\0';
            printf("%s",&(string[a])+1);
        }
    }
    printf("%s",string);
    
    return 0;
    
}
