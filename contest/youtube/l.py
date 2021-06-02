# cook your dish here

n=int(input())
od=0
ev=0
for i in range(n):
    if i%2==0:
        ev+=10
        print(ev,end=" ")
    else:
        od+=2
        print(od,end=" ")
