#include <bits/stdc++.h>
using namespace std;


void merge(int arr[], int l, int m, int r)
{    int i, j, k;
    int n1 = m - l + 1;
     int n2 = r - m;
      int L[n1], R[n2];
     for (i = 0; i < n1; i++)
         L[i] = arr[l + i];
         for (j = 0; j < n2; j++)
            R[j] = arr[m + 1+ j];
              i = 0; j = 0; k = l;
            while (i < n1 && j < n2)
             { if (L[i] <= R[j])
              { arr[k] = L[i];
                   i++;}
               else{arr[k] = R[j];
                 j++;}
                   k++;}
               while (i < n1)
               { arr[k] = L[i];
                    i++;
                    k++;}
                while (j < n2)
                {
                arr[k] = R[j];
                   j++;
                   k++;
                 }
   }

void mergeSort(int arr[], int l, int r)
{
  if (l < r)
  {
   int m = l+(r-l)/2;
   mergeSort(arr, l, m);
   mergeSort(arr, m+1, r);
   merge(arr, l, m, r);
   }
 }

int main()
{
     int f[4]={5,3,2,1};
     mergeSort(f,0,3);
     cout<<"**After Sorting**"<<endl;
     for(int l=0;l<4;l++)
     {
         cout<<f[l];

     }

     cout<<endl<<endl;
int size_arr1[]={10000,20000,30000,40000,50000,60000,70000,80000,90000};
string cases[]={"BEST","Average","WORST"};

cout<<" ***Merge Sort Analysis**"<<endl;


for(int u=0;u<3;u++)
{

cout<<"FOR "<<cases[u]<<" CASE\n";
cout<<"SIZE OF ARRAY"<<"        "<<" TIME_TAKEN(IN MICROSECONDS)\n";
for(int j=0;j<sizeof(size_arr1)/sizeof(int);j++)
{ int n;

 n=size_arr1[j];
int arr[n],mainarr[n];
for(int i=0;i<n;i++)
{ if(u==0)
    {arr[i]=i;
    }
else if(u==1)
     arr[i] = rand()%100;
  else
   arr[i]=n-i;
   mainarr[i]= n-i;
}
clock_t start,end;

start=clock();
mergeSort(arr,0,n-1);

end=clock();
float duration=float(end-start)/float(CLOCKS_PER_SEC);
 cout <<"      "<< size_arr1[j]<<"               "<<duration*1000000<< endl;}
cout<<endl;
}
return 0;
}
