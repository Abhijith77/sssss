#include <iostream.h>
using namespace std;
int calculateSec (int, int, int);
int calculateTime (int, int);
int main()

{
    int totalseconds1 = 0;
    int totalseconds2 = 0;
    int hr1 = min1 = sec1 = 0;
   int hr2 = min2 = sec2 = 0;
    cout<<"Enter the first time: hr, min, sec:"<<endl;
    cin>>hr1>>min1>>sec1>>endl;
    cout<<"Enter the second time: hr, min, sec:"<<endl;
    cin>>hr2>>min2>>sec2>>endl;
    totalseconds1= calculateSec (int hour, int min1, int sec1)
    totalseconds2= calculateSec (int hr2, int min2, int sec2)
    time=calculateTime (int totalseconds1, int totalseconds2)
    return 0;
}
{
    void calculateSec (hour,min,sec)
    hour = hr1 * 3600
    min = min1 * 60
    totalseconds1=hour+min
}
{  
    void calculateTime( totalseconds1, totalseconds2)
        time=totalseconds1-totalseconds2
        time=time/60;
        cout<<time;
}
