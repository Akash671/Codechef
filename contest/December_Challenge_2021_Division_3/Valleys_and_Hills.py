for _ in range(int(input())):
    a,b=map(int,input().split())


    if a%2==0:
       #pass
       print(a+b+2)
       for i in range(a+b+2):
          if i%2==0:
             print(1,end="")
          else:
            print(0,end="")
            
    else:
       print(a+b+2)
       for i in range(a+b+2):
           if(i%2!=0):
              print(1,end="")
           else:
              print(0,end="")
    print()
