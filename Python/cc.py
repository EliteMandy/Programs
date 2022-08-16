# Armstrong Numbers: .....
# n=int(input("Enter any number.: "))
# t=n
# s=0
# while(t>0):
#     digit=t%10
#     s = s+(digit*digit*digit)
#     t=t//10
# if(s==n):
#     print(True)
# else:
#     print(False)
# Palindrome .....
# S=input("Enter a String")
# A=S[::-1]
# if(S==A):
#     print("{} is the Palindrome".format(S))
#     print(S,"=",A)
# else:
#     print("{} is not a Palindrome".format(S))
#     print(S,"!=",A)    

# USING FUNCTION
def func1(y):
    while(y>0):
        r=y%10
        s=s+(r*r*r)
        y=y//10
    if y==s:
        print("It is a Armstrong Number..",s)
        return s
    else:
        print(s," is not a armstrong Number..")    
#MAIN
n=int(input("Enter any Value: "))
t=n
s=0
print(func1(t))