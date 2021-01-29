def subArray(arr, n):
 
    # Pick starting point
    for i in range(0,n):
 
        # Pick ending point
        for j in range(i,n):
            print (arr[i],end=" ")
            print ("\n",end="")
 
             
             
             
# Driver program
arr = [1, 2, 3, 4]
n = len(arr)
print ("All Non-empty Subarrays")
 
subArray(arr, n);
