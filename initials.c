#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)

{
   
   //store user's name as n
    string n=get_string();
    //print first initial
    printf("%c",toupper(n[0]));
    //locate space, print character after and make it capital
    for (int i=0; i<strlen(n); i++)
    {
        if(isspace(n[i])) 
        {
             printf("%c",toupper(n[i+1]));
        }
    }
    printf("\n");
}