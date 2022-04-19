num=int(input("enter the limit"))
print("prime numbers are: ")
for n in range(1,num+1):
    if n>1:
       for i in range(2,n+1):
          if n%i==0:
              break
          else:
              print(n)
            
    
