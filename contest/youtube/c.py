n=int(input())
if n%3!=0:
    print(-1)
if n%2!=0 and n%3==0:
    print(1)
if n%2==0 and n%3==0:
    print(0)
