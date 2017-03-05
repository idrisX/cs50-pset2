#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    //reject anything other than 2 command line arguments
    if(argc!=2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    if(argc==2)
    {
        //prompt user for input and convert key into an integer
        int k=atoi(argv[1]);
        printf("plaintext: ");
        string p=get_string();
        printf("ciphertext: ");
        int n=strlen(p)
        
            //print only alphabetical characters and maintian case
            for (int i=0;;i<n;i++)
            {
                if (isalpha(p[i]))
                {
                    if(islower(p[i]))
                    {
                    printf("%c",(p[i]-'a'+k)%26+'a');
                    }
                    else
                    {
                    printf("%c",(p[i]-'A'+k)%26+'A');
                    }
                
                }
                else
                //if not alphabetical just print character
                {
                    printf("%c",p[i]);
                }
            }
    
        printf("\n");
    }        
}