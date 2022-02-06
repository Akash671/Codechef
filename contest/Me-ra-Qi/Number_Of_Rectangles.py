"""
author    : @akash kumar
institute : @MIT Moradabad 
"""


#count function-------------
"""
fruits = ['apple', 'banana', 'cherry']
x = fruits.count("cherry")
x=1

#----
points = [1, 4, 2, 9, 7, 8, 9, 3, 1]
x = points.count(9)
x=2
#----------
string= "Hello World"
count= string.count('o')
count=2
"""

#abs()-----------------
"""
x = abs(-7.25)
x=7.25

x = abs(3+5j)
x=3
"""
#all()---------------
"""
mylist = [1,1,1,0]
x = all(mylist)
print(x)=false

mylist = [1,1,1,1]
x = all(mylist)
print(x)=true

mylist = [True, True, True]
x = all(mylist)
print(x)=true

"""
#bin()------------------
"""
x = bin(36)
print(x)='0b100100'
"""
#eval()------------
"""
x = 'print(55)'
print(eval(x))=55

x='2+3+5'
print(eval(x))=10
"""
#hex()-----------
"""
x = hex(255)
x='0xff'
hex of 255=ff
"""
#round()---
"""
x = round(5.76543, 2)
print(x)=5.77
"""

#set()-------------
"""
x = set(('apple', 'banana', 'cherry'))
{'banana', 'cherry', 'apple'}

x = set(['apple', 'banana', 'cherry','apple'])
{'banana', 'cherry', 'apple'}
"""

#convert set to list
"""
my_set = set([1,2,3,4])
my_list = list(my_set)
print my_list
>> [1, 2, 3, 4]
"""
#slice(start, end, step)-------
"""
a = ("a", "b", "c", "d", "e", "f", "g", "h")
x = slice(3, 5)
print(a[x])=('d', 'e')

a = ("a", "b", "c", "d", "e", "f", "g", "h")
x = slice(0, 8, 3)
print(a[x])=('a', 'd', 'g')
"""
#convert tuple to list----------------
"""
aTuple = (123, 'xyz', 'zara', 'abc');
aList = list(aTuple)
print(aList)=[123, 'xyz', 'zara', 'abc']
"""

#string fun
#capitalize()-----------
"""
txt = "hello, and welcome to my world."
x = txt.capitalize()
print (x)=Hello, and welcome to my world.
"""
#upper(),lower()--------------
"""
txt = "hello, and welcome to my worldG."
x = txt.upper()
x = txt.lower()
"""

#find()-------
"""
txt = "Hello, welcome to my world."
x = txt.find("welcome")
print(x)=7 (index of welcome)

string.find(value, start, end)

txt = "Hello, welcome to my world."
x = txt.find("e", 5, 10)
print(x)
"""

#format()-------------------------
"""
data=12.23234234
print(format(data,".2f"))=12.23
"""
#index()
"""
txt = "Hello, welcome to my world."
x = txt.index("welcome")
print(x)=7
"""
#isalpha()---------------
"""
txt = "CompanyX"
x = txt.isalpha()
print(x)=True

"""
#isdigit()--------------
"""
txt = "50800"
x = txt.isdigit()
print(x)
"""

#replace()-----------
"""
txt = "I like bananas"
x = txt.replace("bananas", "apples")
print(x)=I like apples
"""
#swapcase()--------------
"""
txt = "Hello My Name Is PETER"
x = txt.swapcase()
"""

#lambda-----------
"""
x = lambda a, b, c : a + b + c
print(x(5, 6, 2))
"""

#remove duplicate from list
"""
mylist = ["a", "b", "a", "c", "c"]
mylist = list(dict.fromkeys(mylist))
print(mylist)
"""

def solve():
  #list(map(int,input().split()[:n]))
  #map(int,input().split())

for _ in range(int(input())):
    solve();
