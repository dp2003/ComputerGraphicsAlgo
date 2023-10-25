#include<iostream>
using namespace std;
main()
{
    int a[20];
    int pos,num,i,n,delnum,count,j;
    cout<<"Ente the number of elements";
    cin>>n;
    cout<<"Enter the elemenst";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number and  location at which you wan to insert";
    cin>>num>>pos;
    for(i=n-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=num;
    for(i=0;i<n+1;i++){
        cout<<a[i];
    }
    cout<<"Enter the number  you want to delete";
    cin>>delnum;

    for(i=0;i<n+1;i++){
            if(a[i]==delnum){
                for(j=i;j<n;j++){
                    a[j]=a[j+1];
                }
                count++;
                break;
            }

    }

    if(count==0)
        cout<<"The element was not found ";
    else
        cout<<"New array";
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }

}
