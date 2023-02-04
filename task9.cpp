#include<iostream>
using namespace std;
main()
{
    int tot;
    int count=0;
    string move[10] = {"Shimmy","Shake","Pirouette","Slide","BoxStep","Headspin","Dosado","Pop","Lock","Arabesque"};
    string pin;
    cout<<"enter your pin:";
    cin>>pin;
    bool isfound=false;
    for(int idx=0;idx<4;idx++)
    {
        if (pin[idx]!='0'&&pin[idx]!='1'&&pin[idx]!='2'&&pin[idx]!='3'&&pin[idx]!='4'&&pin[idx]!='5'&&pin[idx]!='6'&&pin[idx]!='7'&&pin[idx]!='8'&&pin[idx]!='9')
        {
           isfound=true;
        }
    }
       if(isfound==true)
       {
        cout<<"invalid input!";
       }
        else
        { 
           for(int idx=0;idx<4;idx++)
           {
            {
            if(pin[idx]=='0')
            {
                tot=0+idx;
            }
            else if(pin[idx]=='1')
            {
                tot=1+idx;
            }
            else  if(pin[idx]=='2')
            {
                tot=2+idx;
            }
            else  if(pin[idx]=='3')
            {
                tot=3+idx;
            }
            else  if(pin[idx]=='4')
            {
                tot=4+idx;
            }
            else  if(pin[idx]=='5')
            {
                tot=5+idx;
            }
            else  if(pin[idx]=='6')
            {
                tot=6+idx;
            }
            else  if(pin[idx]=='7')
            {
                tot=7+idx;
            }
            else  if(pin[idx]=='8')
            {
                tot=8+idx;
            }
            else  if(pin[idx]=='9')
            {
                tot=9+idx;
            }
            }
            if(tot==0)
            {
                cout<<move[tot]<<" ";
            }
            else if(tot==1)
            {
                cout<<move[tot]<<" ";
            }
            else if(tot==2)
            {
                cout<<move[tot]<<" ";
            }
            else if(tot==3)
            {
                cout<<move[tot]<<" ";
            }
            else if(tot==4)
            {
                cout<<move[tot]<<" ";
            }
            else if(tot==5)
            {
                cout<<move[tot]<<" ";
            }
            else if(tot==6)
            {
                cout<<move[tot]<<" ";
            }
            else if(tot==7)
            {
                cout<<move[tot]<<" ";
            }
            else if(tot==8)
            {
                cout<<move[tot]<<" ";
            }
            else if(tot==9)
            {
                cout<<move[tot]<<" ";
            }
            else if(tot>9)
            {
                tot=tot%10;
                cout<<move[tot]<<" ";
            }


    
           }
        }
}