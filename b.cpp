#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int num ){
    for (int i = 2; i <=(num-1); i++)
    {
        if (num%i==0)
        {
           return (false);
        }
        return(true);
    }
}
    int main(){
        int a=2,b=10;
        for (int i = a; i <=b ; i++)
        {
           if (isprime(i))
           {
            cout<<i<<endl;
           }
        }
        return 0;
    }

   