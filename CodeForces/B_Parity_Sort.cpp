#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
void PArity()
{
  ll n, m, i, j, k;

  cin >> n;

  vll arr(n);

  for (i = 0; i < n; i++)

    cin >> arr[i];

  vll odd, even;

  vll new_arr;

  for (i = 0; i < n; i++)
  {
    if (arr[i] & 1)
      odd.pb(arr[i]);
    else
      even.pb(arr[i]);
  }
  sort(even.begin(), even.end());
  ll ParOdd = 0, parEve = 0;
sort(odd.begin(), odd.end());
  for (i = 0; i < n; i++)
  {
    if (arr[i] & 1)
    {
      new_arr.pb(odd[ParOdd]);
      ++ParOdd;
    }
    else
    {
      new_arr.pb(even[parEve]);
      ++parEve;
    }
  }

  if (is_sorted(new_arr.begin(), new_arr.end()))
    cout << "YES\n";
  else
    cout << "NO\n";
}
int main()

{
  int t;
  cin >> t;
  while (t--)
  {
    PArity();
  }
  return 0;
}
