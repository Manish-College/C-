//Ques:- Sort an array of 0s, 1s amd 2s
//This can be done by normal sorting method
//But here we are doing something else

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int a=0, b=0, c=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        switch(arr[i])
        {
            case 0:
                a++;
                break;
            case 1:
                b++;
                break;
            case 2:
                c++;
                break;

        }
    }
    for(int i=0; i<n; i++)
    {
        while(a>0)
        {
            cout<<"0 ";
            a--;
        }
        while(b>0)
        {
            cout<<"1 ";
            b--;
        }
        while(c>0)
        {
            cout<<"2 ";
            c--;
        }
        cout<<endl;
    }

}