#include<iostream>
#include<stdio.h>
 using namespace std;
 int  main()
  {
      int Arr[10],i;

      //for ( int i=0; i<9; i++)
        cout<<" enter the value of array element ";
        for ( int i=0; i<10; i++)
        {
            cin>>Arr[i];
        }
        cout<<"Array is";
        for ( int i=0; i<10; i++)
        {
            cout<<Arr[i];
        }
        return 0;

  }
