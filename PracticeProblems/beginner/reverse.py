N=int(input())
for t in range(N):
 #   print("Enter Any Number")
  #  speak.Speak("Enter Any Number")
    n=int(input())
    s=0
    while(n>0):
        r=n%10
        s=s*10+r
        n=n//10

   # print("Your Reverse Number is:")
   # speak.Speak("Your Reverse Number is")
    print(s)