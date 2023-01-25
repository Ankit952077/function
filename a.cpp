#include<iostream>
#include<cmath>
using namespace std;
bool isodd(int num ){

    if (num %2==0)
    {
        return(false);    // is even

    }
    else
    return(true);     // is odd
}
int main(){
    int a=1,b=30;

    for (int  i = a; i <=b; i++)
    {
       if (isodd(i))
       {
        cout<<i<<endl;
       }
       
    }
    return 0;
    
}
