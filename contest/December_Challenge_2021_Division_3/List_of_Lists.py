"""
author    : @akash
institute : @MIT
"""


for _ in range(int(input())):
     n=int(input())
     a=list(map(int,input().split()))

     #logic
     m=max(a)
     ans=[0]*(m+1)
     for i in range(n):
         ans[a[i]]+=1

     #print(ans)
     f=max(ans)
     #print(str(f)+"=")
     
     if n==1 or n==f:
         print(0)
     elif f>=2:
        print(n-f+1)
     else:
        print(-1)

