#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
int i,j,k;
char a[20];
clrscr();
cout<<"Enter Sting=";
gets(a);
k=strlen(a);
for(i=0,j=k-1;i<j;i++,j--)
  {
     if(a[i]!=a[j])
     {
      cout<<"Not Palindrome";
      break;
     }
  }
  if(i>=j)
     cout<<"Palindrome";
getch();
}
