num=int(input("Enter the number: "))
n=num
s=0
while num>0:
   a=num%10
   e=a**3
   s+=e
   num//=10
   if n == s:
      print(n,"is a armstrong number")
   else:
         print(n,"is not a armstrong number")
