limit=int(input("enter the limit"))
a,b=0,1
if limit==1:
    print(a)
else:
    print(a)
    print(b)
    for i in range(3,limit+1):
       c=a+b
       a=b
       b=c
       print(c)
    
