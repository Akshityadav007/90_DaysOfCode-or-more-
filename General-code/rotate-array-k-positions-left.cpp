#include<bits/stdc++.h>
using namespace std;

int main ()
{
  int n, k, i;
  cin >> n >> k;		// k < n
  int a[n], b[k];
  for (i = 0; i < n; i++)
    cin >> a[i];

  for (i = 0; i < k; i++)
    b[i] = a[i];

  for (i = k; i < n; i++)
    a[i - k] = a[i];

  int j = 0;
  for (i = n - k; i < n; i++)
    {
      a[i] = b[j];
      j++;
    }

  cout << "The rotated array is: ";
  for (i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;

  return 0;
}
