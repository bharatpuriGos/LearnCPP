#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str ={" My Name is Bharat"};
    cout<<str<<endl;
   
    int n = str.length();
    int res=0;
    for(int i= n; i>=0 ; i--){
        if((str[i]== 32) ||(i==0)){
            res=i;
           do{
               cout<<str[res];
               res++;
               if(res==n)
               break;
           }while((str[res]!= 32));
            
        }
        
    }
    return 0;
}