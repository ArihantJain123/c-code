#include<iostream>
#include<stdio.h>
//new file 
using namespace std ;

int main()
{
    int i,n,m;


    cout<<"enter the size of an array"<<endl;
    cin>>m;
    int arr[m];
    cout<<" enter array element "<<" "<<endl;


    for(i=0; i<m; i++)
    {


        cin>>arr[i];
    }
      cout<<"  enter the value of n"<<endl;
       cin>>n;
    for(i=0; i<m; i++)
  {
    if(arr[i]== n)

        cout<<"TRUE"<<" ";

      if (arr[i]!= n)
       cout<<"FALSE"<<" ";
  }
    return 0;

}
