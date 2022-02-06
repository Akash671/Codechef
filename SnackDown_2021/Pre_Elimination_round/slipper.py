# cook your dish here
n=int(input())
a=list(map(int,input().split()))
a=sorted(a,reverse=False)

ans=0

for i in range(n-1):
    ans=ans+(a[i+1]-a[i])
ans=ans+1
print(ans%998244353)
