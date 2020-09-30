#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[10] = {1, 10,4,2,8,7,0,4,3,2};
    // sort(starting add., ending add.)

    sort(a, a+10);
    for(int i=0; i<10; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}