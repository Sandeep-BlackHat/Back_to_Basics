x = input("Enter String to Convert from Upper Case to Lower Case: ")
lst = []
for i in x:
    lst.append(i)

for i in range(len(lst)):
    if lst[i].isupper():
        print(lst[i].lower())
    else:
        print(lst[i].upper())