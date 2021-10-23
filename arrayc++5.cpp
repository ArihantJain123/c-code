#include<iostream>



using namespace std;

int SelSort(int[],int);
int main()
{
    int arr[50],item,N,index;
    cout<<"how many element in  the array  :";
    cin>>N;
    cout<<"enter array element\n ";
    for(int i = 0; i<N ; i++)
    cin>>arr[i];
    SelSort(arr,N);



    cout<<"\nthe Sorted array now is as shown below ..:";
    for( int i = 0; i<N;  i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;

}
int SelSort(int arr[], int size)
{
    int small,pos,tmp;
    for(int i =0; i<size; i++)
    {
        small = arr[i];
        pos = i;
        for(int j =i+1; j<size; j++)
        { if(arr[j]<small)
        {
            small = arr[j]; pos = j;
        }

        }

        tmp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = tmp;
        cout<<"\sn array after pass ..."<<i+1<<"-is:";
        for(int j=0;j<size;j++) cout<<arr[j]<<" ";




    }


}
