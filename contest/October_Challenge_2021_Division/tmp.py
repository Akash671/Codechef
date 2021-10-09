for _ in range(int(input())):

# Python 3 program for the above approach

# Function to return minimum
# MEX from all K-length subarrays
 def minimumMEX(arr, N, K):

	# Stores element from [1, N + 1]
	# which are not present in subarray
	s = set()

	# Store number 1 to N + 1 in set s
	for i in range(1, N + 2, 1):
		s.add(i)

	# Find the MEX of K-length
	# subarray starting from index 0
	for i in range(K):
		s.remove(arr[i])

	mex = list(s)[0]

	# Find the MEX of all subarrays
	# of length K by erasing arr[i]
	# and inserting arr[i - K]
	for i in range(K,N,1):
		s.remove(arr[i])

		s.add(arr[i - K])

		# Store first element of set
		firstElem = list(s)[0]

		# Updating the mex
		mex = min(mex, firstElem)

	# Print minimum MEX of
	# all K length subarray
	print(mex)

 # Driver Code
 if __name__ == '__main__':
	n,k=map(int,input().split())
	a=list(map(int,input().split()))
	
	minimumMEX(arr, N, K)

	# This code is contributed by ipg2016107.
