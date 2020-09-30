#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[10] = {1,2,4,2,8,7,0,4,3,2};
    
    sort(arr,arr+10); //We compulsary need to sort before searching
    //We can only search in a sorted array
    //binary_search(staring address, ending address, VALUE )
    if(binary_search(arr, arr + 10, 0))
        cout<<"0 is present in array"<<endl;
    else
    {
        cout<<"0 is not present"<<endl;
    }
    if (binary_search(arr, arr + 10, 9))
        cout<<"9 is present in array"<<endl;
    else
    {
        cout<<"9 is not present"<<endl;
    }
    if(binary_search(arr, arr + 10, 8))
        cout<<"8 is present\n";
    else
        cout<<"8 is not\n";
    
    
    
    
}