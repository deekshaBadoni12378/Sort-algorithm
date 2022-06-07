def counting(a):
    size = len(a)
    op = [0] * size
    count = [0] * 20

    for i in range(0, size):
        count[a[i]] += 1

   
    for i in range(1, 20):
        count[i] += count[i - 1]

    
    i = size - 1
    while i >= 0:
        op[count[a[i]] - 1] = a[i]
        count[a[i]] -= 1
        i -= 1

   
    for i in range(0, size):
        a[i] = op[i]


list = [3, 11, 5, 18, 12]
counting(list)
print("Sorted Array : ")
print(list)