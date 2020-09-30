#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int z=0; z<n; z++)
    {
        int a;
        cin>>a;
        long int arr[200];
        for(int y=0; y<((8*a)-2); y++)
        {
            cin>>arr[y];
        }
        long int a1[100];
        int b=0;

        for(int y=0; y<((4*a)-1); y++)
        {
            a1[y] = arr[b];
            b=b+2;
        }
        
        long int a2[100];
        b=1;
        for(int y=0; y<((4*a)-1); y++)
        {
            a2[y] = arr[b];
            b=b+2;
        }
        sort(a1, a1+((4*a)-1));
        sort(a2, a2+((4*a)-1));
        for(int i=0; i<((4*a)-1); i=i+2)
        {
            if(a1[i]!=a1[i+1])
            {
                cout<<a1[i]<<" ";
                break;
            }
        }
        for(int i=0; i<((4*a)-1); i=i+2)
        {
            if(a2[i]!=a2[i+1])
            {
                cout<<a2[i];
                break;
            }
        }
        


    }
}