#include<stdio.h>
int main()
{
                char str[200],*e;
                int vowel,cons;
                vowel=cons=0;
                printf("Enter a string:");
                gets(str);
                e=str;
                while(*e)
                {
                                if(*e=='A'||*e=='a'||*e=='E'||*e=='e'||*e=='I'||*e=='i'||*e=='O'||*e=='o'||*e=='U'||*e=='u')
                                                vowel++;
                                else
                                                cons++;
                                *e++;
                }
                printf("The number of vowel of %s is:%d\n",str,vowel);
                printf("The number of consonant of %s is:%d\n",str,cons);
                return 0;
}
