lst = []
n = int(input("Enter Size of Array: "))

print("The Options are as:")
print("1. Insert")
print("2. Delete")
print("3. Search")
x = int(input("Enter the option: "))

if x == 1 :
    for i in range(0, n):
        inp = int(input("Enter Element: "))
        lst.append(inp)
        print(lst)

elif x == 2:
    z = int(input("Enter the element to delete: "))
    lst.remove(key)
    print(lst)

elif x == 3:
    a = int(input("Enter Element to be Searched: "))
    for i in range(0, n):
        if lst[i] == a:
            print("The element found is at: ", i)
        else:
            print("Not found")