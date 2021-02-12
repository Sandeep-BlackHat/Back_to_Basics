def checkEmpty(input, pattern): 
		
	if len(input)== 0 and len(pattern)== 0: 
		return 'true'
	 
	if len(pattern)== 0: 
		return 'true'
	
	while (len(input) != 0): 

		index = input.find(pattern) 

		if (index ==(-1)): 
		return 'false'

		input = input[0:index] + input[index + len(pattern):]			 

	return 'true'
	
if __name__ == "__main__": 
	input ='GEEGEEKSKS'
	pattern ='GEEKS'
	print (checkEmpty(input, pattern)) 
