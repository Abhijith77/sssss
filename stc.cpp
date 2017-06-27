
#include <iostream.h>
#include <sstream.h>
int main()
{
    string s = "12345";
    stringstream geek(s);
    int x = 0;
    geek >> x;
    cout << "Value of x : " << x;
    return 0;
}
