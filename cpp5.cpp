#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int i = 1;
    int sum = 0;
    while (i <= a)
    {
        sum = sum + 1;
        i = i + 1;
        cout << "The Sum is " << sum<<endl;
    }
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0)
        {
            cout<<" The no. is not prime for "<<endl;

        }
        else {
            cout<<"the no. is prime for "<<endl;
        }
        i=i+1;

    }
    
}

