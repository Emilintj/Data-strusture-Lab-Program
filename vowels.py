str=input("enter a string")
vo=0
for char in str:
    if char in "aeiouAEIOU":
      vo+=1
      print("number of vowels",vo)
