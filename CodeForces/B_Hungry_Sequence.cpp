#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if(num < 2) return false;
    for(int i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;  cin >> n;

    int count = 0;
    int i = 2;

    while(count < n)
    {
        if(isPrime(i))
        {
            cout << i << " ";
            count++;
        }
        i++;
    }

    return 0;
}
