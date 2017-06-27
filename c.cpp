#include <iostream.h>
int main()
{
    int l, h, i, f,count=0;;
    cout << "Enter the range: ";
    cin >> l >> h;
    while (l < h)
    {
        f= 0;

        for(i = 2; i <= l/2; ++i)
        {
            if(l % i == 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 0)
          {  
count++;}
        ++l;
    }
cout<<count;
    return 0;
}
