def getFirst(a):
		ans=sorted(a,reverse=False)
		for i in range(len(a)-1):
			if ans[i]+1==ans[i+1]:
				continue
			else:
				return ans[i]+1
		return ans[-1]+1

a=list(map(int,input().split()))
print(getFirst(a))
