def isSubSequence(string1, string2,m,n):
	if m==0:
		return True
	if n==0:
		return False
	if string1[m-1]==string2[n-1]:
		return isSubSequence(string1, string2,m-1,n-1)

	# If last characters are not matching
	return isSubSequence(string1,string2,m,n-1)


# Driver program to test the above function
for _ in range(int(input())):
    string1,string2=input().split()
    if isSubSequence(string2,string1,len(string2),len(string1)):
        print("AlecWon")
    else:
        print("AlecLost")
