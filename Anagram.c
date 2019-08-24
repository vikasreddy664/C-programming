#include <stdio.h>
#include<string.h>
int main()
{
    int i,n,n1,j;
    char s[100],s2[100];
    gets(s);
    gets(s2);
    n1=n=strlen(s2);
    for(i=n1;i>=0;i--)
    {   
        for(j=0;j<n1;j++)
        {
            if(s[i]==s2[j]&&s2[j]!='0')
            {
                s[i]='0';
                s2[j]='0';
                n--;
            }
        }
    }
    if(n==0)
         printf("Anagram");
    else
        printf("Not A Anagram");

    return 0;
}

TEST CASE-1:
~~~~~~~~~~
I/p:
rat
tar
O/p:
Anagram


TEST CASE-2:
~~~~~~~~~~
I/p:
creative
reactive
O/p:
Anagram

TEST CASE-3:
~~~~~~~~~~
I/p:
abcd
pqrs
O/p:
Not A Anagram

TEST CASE-4:
~~~~~~~~~~
I/p:
abcd
bcdaa
O/p:
Not A Anagram
