''' author : @akash kumar '''
for _ in range(int(input())):
    n=int(input())
    c=1
    b=0
    while(n//c>0):
        c=c*5
        b=b+(n//c)
    print(b)
