/*Check a character is Vowel or consonant*/
#include<stdio.h>
int main()
{
                char c;
                printf("Enter a character:");
                scanf("%c",&c);
                if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
                                printf("Character is vowel\n");
                else
                                printf("Character is consonant\n");
                return 0;

}
