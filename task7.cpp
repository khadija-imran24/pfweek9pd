#include<iostream>
using namespace std;
main()
{
    string array1;
    string array2;
    int idx=0;
    int count=0;
    cout<<"enter 1st string words:";
    cin>>array1;
    cout<<"enter 2nd string words:";
    cin>>array2; 
    while(array1[idx]!='\0')
    {
       if (array1[idx]==array2[idx])
       {
        count++;
       }
       idx++;
    }
    cout<<"string have "<<count<<" "<<"common characters";

}

    