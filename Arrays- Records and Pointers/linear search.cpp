#include<iostream>
using namespace std;
int main()
{
    int i, j, n, item;
    cout<<"Enter the number of array elements:\n";
    cin>>n;
    int arr[n+1];
    cout<<"Enter "<<n<<" integers\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter a number to search:\n";
    cin>>item;
    arr[n]=item;

    for(i=0; i<n; i++)
    {
        if(item==arr[i])
        {
            cout<<"YES, "<<item<<" is the "<<i+1<<"th element in the array.\n";
            break;
        }
    }
    if(i==n)
        cout<<"NO, "<<item<<" isn't in the array.\n";

    return 0;

}
