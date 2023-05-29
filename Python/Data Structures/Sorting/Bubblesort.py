arr = [2,5,1,34,12,32,3]

for i in range(0,len(arr)):
    for j in range(0,len(arr)-i-1):
        if(arr[j]>arr[j+1]):
            temp = arr[j]
            arr[j] = arr[j+1]
            arr[j+1] = temp

print(arr)  
#output [1, 2, 3, 5, 12, 32, 34]
