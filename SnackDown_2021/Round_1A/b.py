#n=int(input())
#a=list(map(int,input().split()))
#a=[1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 4, 3, 6, 6, 7, 7, 9, 7, 2, 2]
a=[1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 4, 3, 6, 6, 7, 7, 9, 7, 2]
n=len(a)
m=max(a)
m=m+1
ans=[0]*m
#print(ans)
for i in range(n):
   ans[a[i]]+=1
print(ans)
c=0
for i in ans:
  if i%2!=0:
    c+=1

print(c)
