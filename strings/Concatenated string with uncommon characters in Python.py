def uncommonConcat(str1, str2): 
	set1 = set(str1) 
	set2 = set(str2) 

	common = list(set1 & set2) 

	result = [ch for ch in str1 if ch not in common] + [ch for ch in str2 if ch not in common] 

	print( ''.join(result) ) 

if __name__ == "__main__": 
	str1 = 'ksheeraj'
	str2 = 'hiranmayee'
	uncommonConcat(str1,str2) 
