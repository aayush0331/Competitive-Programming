#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[1000], carry=0,dig,len=1;
    arr[0]=1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < len; j++)
        {
            int mul=i*arr[j] +carry;
            dig=mul%10;
            arr[j]=dig;
            carry=mul/10;
        }
        while (carry)
        {
            dig=carry%10;
            arr[len]=dig;
            len++;
            carry/=10;
        }
    }
    for (int i = len-1; i >=0; i--)
    {
        cout<<arr[i];
    }
    
    return 0;
}