#include<iostream>
using namespace std;
main()
{
        
      string word;
      int counter=1;
      cout<<"enter string:";
      getline(cin,word);
      int sum=0;
      while(word[counter]!='\0')
      {
        counter++;
      }
      cout<<"length is:"<<counter<<endl;
      if(counter%2==0)
      {
        cout<<"true";
      }
      else
      {
        cout<<"false";
      }
       
}
      
        
