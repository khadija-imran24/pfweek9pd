#include<iostream>
using namespace std;
main()
{
    int numCol;
    int total;
    int count =0;
    int count1=0;
    cout<<"enter the number of strips to be colored in a pattern:";
    cin>>numCol;
    string colour[numCol];
    for(int idx=0;idx<numCol;idx++)
    {
        cout<<"enter color";
        cin>>colour[idx];
        count=count+2;
        if(colour[idx] != colour[idx - 1] && idx != 0)
        {
            count +=1;
        }
    }
    total=count;
    cout<<total<<"secs";
}

    