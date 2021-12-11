#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
    system("cls");

    double distance,x1,y1,x2,y2;
    cout<<"enter the value of first coordinate :";
    cin>>x1>>y1;
    cout<<"enter the value of second coordinate :";
    cin>>x2>>y2;
    distance = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    cout<<" the distance between("<<x1<<","<<y1<<")and("<<x2<<","<<y2<<") two points "<<distance<<endl;
    return 0;

}
