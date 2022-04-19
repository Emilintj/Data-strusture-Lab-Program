num=int(input("ENTER A NUMBER"))
fact=1
if num==0:
   print("factorial of ",num,"is",fact)
for i in range(1,num+1):
  fact =fact*i
print("factorial of ",num,"is",fact)
