#include <iostream.h>
#include <conio.h> 
#include <string.h> 
void main()
{ 
char str[20],tmp; 
int i,j; 
clrscr(); 
cout<<"\nEnter a string : ";
cin>>str; 
cout<<"\n\nOriginal String : "<<str;
for(i=0;i<strlen(str);i=i+2)
{ 
tmp = str[i];
str[i] = str[i+1]; 
str[i+1] = tmp;
} 
cout<<"\nAfter Swap String : "<<str;
getch();
}
