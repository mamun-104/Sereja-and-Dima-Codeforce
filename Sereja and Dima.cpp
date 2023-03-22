#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int i,j,array_size=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sreja=0,dima=0,tmp=0;

    i=0,j=n-1;
    array_size=sizeof(a)/sizeof(int);

    while(array_size)
    {
        if(tmp==0)
        {
            if(a[i]>a[j]){sreja=sreja+a[i]; tmp=1; i++;}
            else{
            sreja=sreja+a[j]; tmp=1; j--;
            }
        }
        else
        {
            if(a[i]>a[j]){dima=dima+a[i]; tmp=0; i++;}
            else{
            dima=dima+a[j]; tmp=0; j--;
            }
        }
        array_size--;

    }

    cout<<sreja<<" "<<dima<<"\n";

    return 0;
}

