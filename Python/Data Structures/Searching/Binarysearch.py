arr = [2,5,7,9,12,16,19,23,45] ; key = 16
flag = False
low = 0 ; high = len(arr)-1
print(low , high)

while(low <= high):
    mid = (low+high)//2
    if(arr[mid]==key):
        flag = True
        break
    elif(arr[mid]<key):
        low = mid+1
    else:
        high = mid-1

if(flag == True):
    print("Element Found")
else:
    print("Element Not Found")
