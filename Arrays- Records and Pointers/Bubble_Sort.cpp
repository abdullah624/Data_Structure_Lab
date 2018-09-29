#include<iostream>
using namespace std;
int main()
{
    int k, i, n, temp;
    cout<<"Enter the number of array elements :\n";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements :\n";
    for(i=0; i<n; i++)
        cin>>arr[i];
    for(k=0; k<n-1; k++)
    {
        for(i=0; i<n-k; i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;

}
