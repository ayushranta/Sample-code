#include<iostream>
#include<math.h>
using namespace std;
int main(){
      int x,t,y,d=0;
      cout<<"enter no. ";
      cin>>x;
      t=x;
      while(x!=0){
                y=x%10;
                x=x/10;
                d=d+pow(y,3);

      }
      cout<<d;
      if(d==t)
                cout<<"it is angorstorm no."<<endl;
      else
                cout<<"it is not a angorsterm no."<<endl;
      return 0;

}
