# Python3 Program to check 
# lower triangular matrix.

# Function to check matrix 
# is in lower triangular
def islowertriangular(M):
	for i in range(0, len(M)):
		for j in range(i + 1, len(M)):
			if(M[i][j] != 0): 
					return False
	return True
	
# Driver function.
M = [[1,0,0,0],
	[1,4,0,0],
	[4,6,2,0],
	[0,4,7,6]]

if islowertriangular(M):
	print ("Yes")
else:
	print ("No")
	
# This code is contributed by Anurag Rawat
