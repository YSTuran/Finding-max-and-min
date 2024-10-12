#include <iostream>

using namespace std;

int main(){
  
 int x, y, z, myMax, myMin;
 
 cout<<"Enter three numbers: ";
 cin>>x>>y>>z;

 if(x>y && x>z){
    myMax=x;
    myMin=(y<z)? y : z;
 }
 else if(y>x && y>z){
    myMax=y;
    myMin=(x<z)? x : z;
 }
 else{
    myMax=z;
    myMin=(x<y)? x : y;
 }
 cout<<"Maximum value is: "<<myMax<<endl;
 cout<<"Minimum value is: "<<myMin<<endl;
    return 0;
}