arr = [1,2,3,4,5,6,7,8,9,10]
x = 8

flag = False

for i in arr:
    if(i==x):
        flag = True
        break
if(flag==True):
    print("Element Found")
else:
    print("Element Not Found")
    
    
