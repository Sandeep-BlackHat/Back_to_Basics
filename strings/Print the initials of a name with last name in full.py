
#Print the initials of a name with last name in full
##Given a name, print the initials of a name(uppercase) with last name(with first alphabet in uppercase) written in full separated by dots.

#Examples:

#Input : geeks for geeks
#Output : G.F.Geeks

#Input : mohandas karamchand gandhi
#Output : M.K.Gandhi 



def name(s):  
    l = s.split() 
    new = ""   
    for i in range(len(l)-1): 
        s = l[i]   
        new += (s[0].upper()+'.') 
    new += l[-1].title() 
      
    return new              
s ="mohandas karamchand gandhi" 
print(name(s))
  
