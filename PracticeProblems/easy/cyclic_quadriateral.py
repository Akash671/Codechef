"""
author : @akash kumar
github : https://github/Akash671

string fun:

string.replace(sub_old_string,new_sub_string,count)
string.count(your_string)
"""

def solve():
   #n,m=map(int,input().split())
   #n=int(input())
   a=list(map(int,input().split()))
   #s=str(input())
   #a,b=input().split()
   if(a[0]+a[2]==180 and a[1]+a[3]==180):
      print("YES")
   else:
     print("NO")

for _ in range(int(input())):
  solve()
   
   
   
