//Topic:7. Write a program to count the number of vowels and consonants in a string using a pointer.
#include <stdio.h>
#define N 10
int main()
{

 char vowels[5]="aeiou";
 char str[N];
 int count_vowels=0;
 int count_consonants=0;
 printf("Enter the string:");
 fgets(str,N-1,stdin);
 for(int i=0;str[i];i++)
 {
    for(int j=0;vowels[j];j++)
    {
        if(str[i]==vowels[j])
        {
            count_vowels++;
            break;
        }
    }
 }

 printf("The input string is \"%s\".",str);
 printf("\nThe count of vowels in string is %d",count_vowels);
 printf("\nThe count of consonants in string is %d",count_consonants);

 return 0;

}