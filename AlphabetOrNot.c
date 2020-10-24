/*Check a character is Alphabet or not*/
#include<stdio.h>
int main()
{
                char c;
                printf("Enter a character:");
                scanf("%c",&c);
                if((c>=97&&c<=122)||(c>=65&&c<=90))
                                printf("Character is Alphabet\n");
                else
                                printf("Character is not Alphabet\n");
                return 0;

}
