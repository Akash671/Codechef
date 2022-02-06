# cook your dish here
for _ in range(int(int(input()))):
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    ans=sum(a)
    tmp=ans
    if ans>=1000:
      ans=ans*10
      ans=ans//100
      tmp=tmp-ans
    if tmp<=m:
        print("YES")
    else:
        print("NO")
        
