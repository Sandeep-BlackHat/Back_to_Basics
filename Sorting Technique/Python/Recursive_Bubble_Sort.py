import sys
a = []
x = int(input("Enter Size of Array: "))
for i in range(0, x):
    inp = int(input("Enter Elements: "))
    a.append(inp)

def bubbleSortRecu(self, n=None):
    if n is None:
        n = self.x
    if x == 1:
        return

    for i in range(len(a)):
        if a[i] > a[i+1]:
            a[i], a[i+1] = a[i+1], a[i]

print("Sorted array: ")
for i in range(len(a)):
    print("%d" % a[i])