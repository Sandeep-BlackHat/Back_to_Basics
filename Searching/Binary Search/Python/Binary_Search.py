def binarySearch(arr, l, r, x):

    if r >= l:

        mid = l + (r - l) // 2

        if arr[mid] == x:
            return mid

        elif arr[mid] > x:
            return binarySearch(arr, l, mid - 1, x)

        else:
            return binarySearch(arr, mid + 1, r, x)

    else:
        return -1

#Main
a = []
s = int(input("Enter Size of Array: "))
for i in range(0, s):
    inp = int(input("Enter Elements: "))
    a.append(inp)
k = int(input("Enter the element to Search: "))
print("1 -> Element not present | -1 -> Element not present: ", binarySearch(a, 0, s-1, k))