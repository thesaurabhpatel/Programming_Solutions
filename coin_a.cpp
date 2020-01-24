#include<bits/stdc++.h>
using namespace std;

int findBiggest(int num1, int num2, int num3){
    int biggest;
    if(num1>=num2){
            if(num1>=num3){
                return num1;
            }
            else{
                return num3;
            }
    }
    else{
        if(num2>num3){
            return num2;
        }
            else{
                return num3;
            }
        }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int sum=a+b+c;
        int max=findBiggest(a,b,c);

        int z=3*max-sum;

        int k=n-z;

        if(k>=0 && k%3==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
return 0;
}