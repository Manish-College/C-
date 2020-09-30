#include <iostream>
using namespace std;

int main()
{
    int arr[3][4] = {{2,1,3,2}, {1,4,2,3}, {2,2,5,4}};
    int arr1[3][4] = {0,1,2,3,4,5,6,7,8,9,1,0};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}