def heapsort(a,n,i):
    l = 2 * i + 1
    r = 2 * i + 2
     
    if l < n and a[l] > a[i]:
        largest = l
    else:
        largest = i
         
    if r < n and a[r] > a[largest]:
        largest = r
         
    if largest != i:
        a[i], a[largest] = a[largest], a[i]
        heapsort(a, n, largest)
 
 
def sort(a):
    n = len(a)
     
    for i in range(n, -1,-1):
       heapsort(a, n, i)
         
    for i in range(n-1,0,-1):
        a[0] ,a[i] = a[i], a[0]
        heapsort(a, i, 0)
 
 
a = [12, 15, 19, 25, 36, 10]
sort(a)
n = len(a)
print("Sorted array is")
for i in range(n):
    print("%d " % a[i], end='')
  