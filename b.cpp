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
    bool isbetterprime(int num){
        for (int i = 2; i*i <=num ; i++)
        {
            if (num%i==0)
            {
                return(false);
            }
            return(true);
        }
        
    }

    int main(){
        int a=2,b=40;
        for (int i = a; i <=b ; i++)
        {
           if (isbetterprime(i))
           {
            cout<<i<<endl;
           }
        }
        return 0;
    }

   