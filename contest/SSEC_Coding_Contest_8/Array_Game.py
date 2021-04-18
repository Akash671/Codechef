""" auhtor : @akash kumar """

def solve(a,n,m):
    mx=0
    for i in range(n-m):
        s=set()
        for j in range(m):
            s.add(a[i+j])
        if(len(s)>mx):
            mx=len(s)
    return mx

n,m=map(int,input().split())
a=list(map(int,input().split()[:n]))
print(solve(a,n,m))
