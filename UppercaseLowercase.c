/*Check a character is Uppercase or lowercase or special character*/
#include<stdio.h>
int main()
{
                char c;
                printf("Enter a character:");
                scanf("%c",&c);
                if(c>=97&&c<=122)
                                printf("Lowercase\n");
                else if(c>=65&&c<=90)
                                printf("Uppercase\n");
                else
                                printf("Special character\n");
                return 0;

}
