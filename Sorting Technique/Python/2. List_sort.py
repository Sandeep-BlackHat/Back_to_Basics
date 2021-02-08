lst = []
x = int(input("Enter the Size of array: "))

for i in range(0, x):
    inp = int(input("Enter Numeric Elements of Arrays: "))
    lst.append(inp)

print("List before Sorting: ")
print(lst)
lst.sort()
print("List after Sorting: ")
print(lst)
