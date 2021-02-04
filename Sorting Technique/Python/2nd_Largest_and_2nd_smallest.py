lst = []
x = int(input("Enter the Size of array: "))

for i in range(0, x):
    inp = int(input("Enter Numeric Elements of Arrays: "))
    lst.append(inp)

lst.sort()
print("The List is: ", lst)
print("2nd largest element: ", lst[x-2])
print("2nd smallest element: ", lst[1])