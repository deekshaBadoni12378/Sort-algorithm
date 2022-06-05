#include <iostream>
#include <conio.h>
using namespace std;
void merge(int *,int, int , int );
void ms(int a[], int l, int h)
{
    int mid;
    if (l< h){
        mid=(l+h)/2;
        ms(a,l,mid);
        ms(a,mid+1,h);
        merge(a,l,h,mid);
    }
}
void merge(int *a, int l, int h, int mid)
{
    int i, j, k, c[50];
    i = l;
    k = l;
    j = mid + 1;
    while (i <= mid && j <= h) {
        if (a[i] < a[j]) {
            c[k] = a[i];
            k++;
            i++;
        }
        else  {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= h) {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = l; i < k; i++)  {
        a[i] = c[i];
    }
}
int main()
{
    int arr[30], num;
    cout<<"Enter number of elements :";
    cin>>num;
    cout<<"Enter "<<num<<" elements:";
    for (int i = 0; i < num; i++) { cin>>arr[i];
    }
    ms(arr, 0, num-1);
    cout<<"Sorted array\n";
    for (int i = 0; i < num; i++)
    {
        cout<<arr[i]<<"\t";
    }
}

