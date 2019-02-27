
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; //no of elements
    
    int a[n+1];
    
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    
    long long int sub = pow(2,n) - 1; //no of subsets (2^n - 1)
    
    while(sub)
    {
        long long int temp = sub;
        
        int c = 1;
        
        while(temp)
        {
            if(temp & 1)
                cout << a[c] << ' ';
            
            c++;
            temp >>= 1; //temp = temp/2
        }
        
        cout << endl;
        
        sub--;
    }
}
