#include<iconv.h>
#include<iostream>
#include<vector>
using namespace std;

int add(int num1,int num2,int num3){
    int sum=num1+num2+num3;
    return sum;

}
float add(int num3,int num4){
    float sum=num3+num4;
    return sum;
}
bool isprime(int num5){
    for (int i = 1; i <=10; i++)
    {
        if (num5%2==0)
        {
            return true;

        }
        else 
        return false;
    }
}
 bool isodd(int num6){
    for (int i = 1; i <=num6-1; i++)
    {
        if (num6%2==0)
        {
            return false;
        }
        else
        return true;

    }
    
 }
 int main(){
    int a=10,b=20,c=30;
    int e=3.30,f=3.45;
    for (int i = 1; i <=10; i++)
    {
        if (isodd(i))
        {
            cout<<(i)<<" ";
        }
        
    }
    
    return 0;

 }
