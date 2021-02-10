def mergesort(arr):
    if len(arr) > 1:
        # finding the mid
        mid = len(arr) // 2

        # dividing elements in temp arrays
        temp1 = arr[:mid]
        temp2 = arr[mid:]

        mergesort(temp1)
        mergesort(temp2)

        i = j = k = 0

        # copy data
        while i < len(temp1) and j < len(temp2):
            if temp1[i] < temp2[j]:
                arr[k] = temp1[i]
                i += 1

            else:
                arr[k] = temp2[j]
                j += 1
            k += 1

        while i < len(temp1):
            arr[k] = temp1[i]
            i += 1
            k += 1

        while j < len(temp2):
            arr[k] = temp2[j]
            j += 1
            k += 1

def printlist(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()


if __name__ == '__main__':
    arr = [12, 11, 13, 5, 6, 7]
    print("Given array is", end="\n")
    printlist(arr)
    mergesort(arr)
    print("Sorted array is: ", end="\n")
    printlist(arr)