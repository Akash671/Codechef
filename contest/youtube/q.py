# cook your dish here


n=int(input())
c=0
k=0
for i in range(n):
    if k==0:
     k=1
     for j in range(1,5+1):
          c+=1
          print(c,end=" ") 
    else:
        k=0
        for j in range(1,5+1):
          print(c,end=" ")
          c-=1
    c+=5
    print()
