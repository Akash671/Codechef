import math

def solve():
  #list(map(int,input().split()[:n]))
  a,b,c,d=map(int,input().split())
  ans=(a+b+c)/d
  print(math.ceil(ans))

for _ in range(int(input())):
    solve();
