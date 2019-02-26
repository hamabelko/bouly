// Ly Boureima

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include < stdlib.h>

int main(int argc, string argv[]) {

    if (argc == 2)
    {
        string a;
        int b=atoi(argv[1]);

        a=get_string("plaintext:");

        printf("cyphertext:");
        for (int i=0; i<strlen(a); i++)
        if (isalpha(a[i]))
        {

           if(islower(a[i]))
           {
             printf ("%s", (((a[i]- 97)+b)%2));
           }

         if(issupper(a[i]))
           {
            printf ("%s", (((a[i]- 65)+ b)%26)+65);
           }
        }

        else
        {
            printf("invalid");
            retourn 0;
        }

   }
