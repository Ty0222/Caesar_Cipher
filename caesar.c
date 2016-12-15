#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Wrong number of arguments\n");
        return 1;
    }
    else if (isdigit(argv[1][0]))
    {
        char str[50];
        int key = atoi(argv[1]);
        gets(str);
        
        for (int i = 0, n = strlen(str); i < n; i++)
        {
            int char_limit;
            char first_letter;
            
            if (isupper(str[i]))
            {
                char_limit = 90;
                first_letter = 'A';
            }
            else if (islower(str[i]))
            {
                char_limit = 122;
                first_letter = 'a';
            }
            
            if (!(isupper(str[i]) || islower(str[i])))
            {
                printf("%c", str[i]);
            }
            else
            {
                int result = str[i] + key % 26;
                
                if (result > char_limit)
                {
                    int altered_key = result - char_limit;
                    
                    printf("%c", first_letter + altered_key-1);
                }
                else
                {
                    printf("%c", result);
                }
            }
        }
        
        printf("\n");
        return 0;
    }
}