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
   #a=list(map(int,input().split()[:n]))
   #s=str(input())
   #a,b=input().split()
   s=str(input())
   a=""
   n=len(s)
   for i in range(2):
      a+=s[i]
   if a=="</" and s[n-1]==">" and s[2]!="/":
     print("Success")
   else:
     print("Error")
for _ in range(int(input())):
  solve()
   
   
   
