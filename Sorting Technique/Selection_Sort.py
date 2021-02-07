import sys

import sys
a = []
x = int(input("Enter Size of Array: "))
for i in range(0, x):
    inp = int(input("Enter Elements: "))
    a.append(inp)

for i in range(len(a)):
    min_idx = i
    for j in range(i + 1, len(a)):
        if a[min_idx] > a[j]:
            min_idx = j

    a[i], a[min_idx] = a[min_idx], a[i]

print("Sorted array")
for i in range(len(a)):
    print("%d" % a[i])