"""
author : @akash 
"""

for _ in range(int(input())):
 def sub_lists (l):
  lists = [[]]
  for i in range(len(l) + 1):
    for j in range(i):
     lists.append(l[j: i])
  return lists

 n,s=map(int,input().split())
 l1=list(map(int,input().split()[:n]))
 #m=max(l1)
 if 0 in l1:
  a=sub_lists(l1)
  ans=[]
  for i in a:
   if len(i)!=0:
    for j in range(max(i)+2):
     if (j not in i):
        ans.append(j)
        break
  #print(ans)
  aa=sorted(ans,reverse=False)
  #print(aa)
  print(aa[s-1])
 else:
  print(0)


# T(n)=O(N^2)
