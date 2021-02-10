import sys
a = []
x = int(input("Enter Size of Array: "))
for i in range(0, x):
    inp = int(input("Enter Elements: "))
    a.append(inp)

for i in range(len(a)):
    for j in range(0, len(a) - i - 1):
        if a[j] > a[j+1]:
            a[j], a[j+1] = a[j+1], a[j]

print("Sorted array")
for i in range(len(a)):
    print("%d" % a[i])
