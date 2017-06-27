#include<iostream.h>
#include<conio.h>
void camelCase(char line[])
{
    int index = 0;
    bool lineStart = true;

    for (index;line[index]!='\0';index++)
    {
        if (lineStart)
        {
            line[index] = toupper(line[index]);
            lineStart = false;
        }

        if (line[index] == ' ')
        {
            if (ispunct(line[index]))
            {
                index++;
                line[index] = toupper(line[index]);
            }
            else
            {
                index++;
                line[index] = toupper(line[index]);
            }
        }else
            line[index] = tolower(line[index]);
    }
    lineStart = false;
}
void main()
{
char s[100];
cout<<"enter the string";
cin>>s;
camelCase(s);
getch();
}
