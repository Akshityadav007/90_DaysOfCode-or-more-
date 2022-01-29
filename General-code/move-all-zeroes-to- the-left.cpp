#include<bits/stdc++.h>
using namespace std;

int main ()
{
  int n, i;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
    cin >> a[i];

  for (i = 0; i < n; i++)
    {
      if (a[i] == 0)
	{
	  int j = i - 1;
	  while (a[j] != 0 && j >= 0)
	    {
	      a[j + 1] = a[j];
	      j--;
	    }
	  a[j + 1] = 0;
	}
    }
  cout << "The array is: ";
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;

  return 0;
}
