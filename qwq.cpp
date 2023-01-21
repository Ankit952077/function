#include<iostream>
using namespace std;
  
   int add(int num3,int num4){
    int sum=num3+num4;
       return sum;
   }
    int add(int p,int q,int w){
        int sum=p+q+w;
        return sum;
    }
   float add(float c,float d){
    float sum=c+d;
    return sum;
   }

   int main(){
    int a=2;
    int b=3;
    int p=5;
    int q=5;
    int w=4;
    float c=3.4;
    float d=2.4;

cout<<add(p,q,w)<<endl;
 return 0;
   }