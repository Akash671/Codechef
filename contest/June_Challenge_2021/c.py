"""
author : @akash
"""
mod=1000000007


def solve():
  n,m=map(int,input().split())
  #a=list(map(int,input().split()[:n])
  if(n==1):
     print(1)  
  else:
    #x=(2**n-1)%mod
    x=(pow(2,n)-1)%mod
    #ans=(x**m)%mod
    ans=(pow(x,m))%mod
    print(ans)

for _ in range(int(input())):
   solve()
