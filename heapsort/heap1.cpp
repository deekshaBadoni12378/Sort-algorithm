#include <iostream>
#include <conio.h>
using namespace std;
  void heapify(int a[], int n, int x)
{
   int larg = x;
   int l = 2*x+ 1;
   int r = 2*x + 2;

   if (l < n && a[l] > a[larg])
   larg = l;
   if (r < n && a[r] > a[larg])
   larg = r;
   if (larg != x)
      {
      swap(a[r], a[larg]);
      heapify(a, n, larg);
      }
}
void heapSort(int a[], int n)
{
   for (int i = n / 2 - 1; i >= 0; i--)
   heapify(a, n, i);

   for (int i=n-1; i>=0; i--)
   {
      swap(a[0], a[i]);
      heapify(a, i, 0);
   }
}
void print(int a[], int n)
{
   for (int i=0; i<n; ++i)
   cout << a[i] << " ";
   cout << "\n";
}

int main()
{
   int arr[] = {14,17,32,22,25};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout<<"original array"<<endl;
   print(arr,n);

   heapSort(arr, n);

   cout << "Sorted array"<<endl;
   print(arr, n);
}
