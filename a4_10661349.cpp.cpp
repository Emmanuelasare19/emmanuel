#include <iostream>

using namespace std;

int gcd(int x, int y)
{
    if((x>=y)&&(x&y==0))
        return y;
    else
        gcd(y,(x&y));
}
int main(int argc, char **argv)
{
    int num1;
    int num2;
    cout<<"Enter the first number" <<endl;
    cin<<num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    gcd(num1,num2)
    cout<<"GCD = "<<gcd(num1,num2)
    return 0;
}
