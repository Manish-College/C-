#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
	    int a;
	    cin>>a;
	    int b=0;
	    int a1[a];
	    for(int j=0; j<a; j++)
	    {
	        cin>>a1[j];
	        b = b+a1[j];
	    }
	    cout<<b;
	    
	}
	return 0;
}