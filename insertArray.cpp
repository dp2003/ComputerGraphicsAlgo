#include<iostream>
int arr[5];
for(int i=0;i<5;i++)
{
    cin>>arr[i];
}
int pos;
cin>>pos;
int ele;
cin>>ele;
if(pos>n)
{
    cout<<"Invalid input";
}
else
{
    for(i=n-1;i>=pos-1;i-)
    {
        arr[i+1]=arr[i];
        arr[pos-1]=ele;
        cout<<"Array after insertion is:\n";
        for (i = 0; i <= n; i++)
        cout << arr[i] << "";
    }
    return 0;
}
