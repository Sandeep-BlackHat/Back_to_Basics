#Question:
#Remove all consecutive duplicates from the string
#Given a string S, remove all the consecutive duplicates. Note that this problem is different from Recursively remove all adjacent duplicates. Here we keep one character and remove all subsequent same characters.

#Examples:

#Input  : aaaaabbbbbb
#Output : ab

#Input : geeksforgeeks
#Output : geksforgeks

#Input : aabccba
#Output : abcba


def removeDuplicates(s):
    n=len(s)
    if(n<2):
        return
    j=0
    for i in range(n):
        if(s[j]!=s[i]):
            j+=1
            s[j]=s[i]
    j+=1
    s=s[:j]
    return s
if __name__ == '__main__':  
          
    S1 = "hellomini"
    S1 = list(S1.rstrip()) 
    S1 = removeDuplicates(S1)  
    print(*S1, sep = "")  
          
    S2 = "ksheeraj"
    S2 = list(S2.rstrip()) 
    S2 = removeDuplicates(S2)  
    print(*S2, sep = "") 
