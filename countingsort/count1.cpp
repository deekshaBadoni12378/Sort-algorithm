#include <iostream>
#include<conio.h>
using namespace std;
void cs(int a[], int size)
 {
  int op[10];
  int count[10];
  int max = a[0];
  for (int i = 1; i < size; i++) {
    if (a[i] > max)
      max = a[i];
  }
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  for (int i = 0; i < size; i++) {
    count[a[i]]++;
  }
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }
  for (int i = size - 1; i >= 0; i--) {
    op[count[a[i]] - 1] = a[i];
    count[a[i]]--;
  }
  for (int i = 0; i < size; i++) {
    a[i] = op[i];
  }
}
void print(int a[], int size) {
  for (int i = 0; i < size; i++)
    cout << a[i] << " ";
  cout << endl;
}
int main() {
    int x, i;
    cout<<"enter no. of element:";
    cin>>x;
  int a[x];
  for(i=0;i<x;i++){

  cout<<"elements"":";
  cin>>a[i];
  }
  cs(a, x);
  print(a, x);
}
