If root is NULL 
   then create root node
return

If root exists then
   compare the data with node.data
   
   while until insertion position is located

      If data is greater than node.data
         goto right subtree
      else
         goto left subtree

   endwhile 
   
   insert data
	
end If  
