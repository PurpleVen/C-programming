#include<stdio.h>
#include<conio.h>
int main()
{
    char str[100];
    int i,count = 0;
    printf("Enter a word to check the number of vowels present: ");
    scanf("%s",str);
    //iterate the string
    for(i = 0; str[i] != '\0'; i++)
    {
        //check each char with any vowel. 'a','e','i','o','u'.
        if( str[i] == 'a' ||
            str[i] == 'e' ||
            str[i] == 'i' || 
            str[i] == 'o' || 
            str[i] == 'u'    )
        {
        
            count++;
        }
    }
    printf("\n\nThe number of vowels present in the string are: %d\n",count);      //print the result
    return 0;
    getch();
}
