a=list(map(int,input().split()))
ans=[]
for i in a:
  if i in ans:
     continue
  else:
     ans.append(i)
print(ans)
