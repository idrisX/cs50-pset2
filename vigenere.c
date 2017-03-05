#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    int j=0;
    int i=0;
    //if input is anything other than two argument vectors return error
    
    if(argc!=2)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }
   
    
    if(argc==2)
    {
        //store key as a string
        string k=argv[1];
        //prompt user for plain text
        printf("plaintext: ");
        //store plain text as string
        string p=get_string();
        printf("ciphertext: ");
        int n=strlen(p);
        for ( i=0;i<n;i++)
            {
                //for alphabetical inputs
                if(isalpha(p[i]))
                {
                    //change each individual character by corresponding character in key
                    if (isupper(p[i]))
                    {  
                    printf("%c",(p[i]-'A'+(toupper(k[j%strlen(k)])-'A'))%26+'A');
                    }
                    else if (islower(p[i]))
                    {
                     printf("%c",(p[i]-'a'+(toupper(k[j%strlen(k)])-'A'))%26+'a');
                    }
               
               //increment j only over alphabetical characterss so that key only works for alphabetical characters
               j++;
               }
               else 
               //if character is not alphabetical simply print character
               {
                  printf("%c",p[i]);
               }
               
            }
    
        printf("\n"); 
    }        
     
}