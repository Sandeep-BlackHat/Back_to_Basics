# Python code to demonstrate the working of 
# index() and reverse()
  
# importing "array" for array operations
import array
  
# initializing array with array values
# initializes array with signed integers
arr= array.array('i',[1, 2, 3, 1, 2, 5]) 
 
# printing original array
print ("The new created array is : ",end="")
for i in range (0,6):
    print (arr[i],end=" ")
 
print ("\r")
 
# using index() to print index of 1st occurrenece of 2
print ("The index of 1st occurrence of 2 is : ",end="")
print (arr.index(2))
 
#using reverse() to reverse the array
arr.reverse()
 
# printing array after reversing
print ("The array after reversing is : ",end="")
for i in range (0,6):
    print (arr[i],end=" ")  

Output: 

The new created array is : 1 2 3 1 2 5 
The index of 1st occurrence of 2 is : 1
The array after reversing is : 5 2 1 3 2 1    
