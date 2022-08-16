# *******1st*********

# x=int(input("Enter 1st Value"))
# if(x<0):
#     print("The value is -ve")
# else:
#     print("The value is +ve")

# *******2nd*************

# x=int(input("Enter any value: "))
# if(x%2==0):
#     print("Entered value is EVEN")
# else:
#     print("Entered Value is ODD")

# *****3RD*****

# x=int(input("Enter Year: \n"))
# if(x%4==0):
#     print("THIS IS LEAP YEAR")
# else:
#     print("THIS IS NOT A LEAP YEAR")

# ***********************4TH******************** 24-03-2020******************
# c=int(input("Enter Celsius"))
# f=32+(9/5)*c
# print(f)

# *********************5TH***********************

# x=int(input("Enter Any Number"))
# sqrt=x**(1/2)
# print(sqrt)

# ******************6TH****************
# x=int(input("Enter No. \n"))
# y=int(input("Enter 2nd No. \n"))
# z=int(input("Enter 3rd No. \n"))
# print(x,y,z)
# if(x>y & y>z):
#     print("The largest number is ",x)

# elif(y>z):
#     print("the largest number is ",y)

# else:
#     print("the largest number is ",z)

# ******************7TH****************
# x=int(input("Enter any Number \n"))
# fact=1
# for i in range(1,x+1):
#     i=++i
#     fact=fact*i

# print(fact)    
    
# *****************8TH*******************
# x=int(input("Enter Any Number \n"))
# s=0
# i=x
# while(x!=0):
#     r=x%10
#     product=(r*r*r)
#     s=s+product 
   
#     x=x//10
# if(s==i):
#     print("It is a ARMSTRONG number")
# else:
#     print("It is not a ARMSTRONG number")        

# ******************9TH******************
# n=int(input("Enter No. \n"))
# for i in range(1,n):
#     n=n+i
# print(n)

# **********************10TH***************
# x=int(input("Enter any number"))
# n1=0
# n2=1
# n3=n1+n2
# print(n1)
# print(n2)
# for i in range(1,x):
#     n1=n2
#     n2=n3
#     n3=n1+n2
#     print(n3)

# *************************************31 march 2022**************
# 1.)))))))
# x=int(input("Enter any no."))
# i=x
# while(x!=0):
#     r=x%10
#     print(r,end='')
#     x=x//10

# 2.))))))))))
# nat=int(input("Enter Any Number: \n"))
# for i in range(1,nat):
#     nat=nat+i

# print(nat)    

# 3.))))))))))))
# x=int(input("Enter any Number: \n"))
# if()

# 4.))))))))))))
# x=int(input("Enter Any Number \n"))
# s=0
# i=x
# while(x!=0):
#     r=x%10
#     product=(r*r*r)
#     s=s+product 
   
#     x=x//10
# if(s==i):
#     print("It is a ARMSTRONG number")
# else:
#     print("It is not a ARMSTRONG number")  

# 5.))))))))))))
# n=int(input("Enter LOOPING no.: \n"))
# num1=0
# num2=1
# num3=num1+num2
# print(num1)
# print(num2)
# for i in range(1,n):
#     num1=num2
#     num2=num3
#     num3=num1 + num2
#     print(num3)

# 6.)))))))))))))))
# n=float(input("Enter Any NUMBER:\n"))
# for i in range(1,11.1):
#     print(n*i)

name,age,attractive = "Mahendra Singh",19,True
print(name)
print(age)
print(attractive)
print(name.find("gh"))
print(name.count("a"))
print(name.replace("a","o"))
import math
print(int(math.pow(5,2)))
print(int(math.sqrt(81)))
x = int(input("Enter no. : "))
y = int(input("Enter 2nd No. : "))
z = int(input("Enter 3rd No. : "))
print(max(x,y,z))
print(min(x,y,z))
# ******************************************SLICING************************************************************
name = name[0:8]
print(name)
char1 =input("Enter any Character")
result1 = ord(char1)
print("ASCII value of the character {} is {}.".format(char1, result1))
n=int(input("Enter No. \n"))
s=0
i=0
while(n>=i):
    s=s+i
    i=i+1
print(s)