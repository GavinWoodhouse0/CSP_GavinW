#Gavin Woodhouse, FizzBuzz Python

x = 0
while x <= 50:
    if x % 15 == 0 and x != 0:
        print("FizzBuzz")
    elif x % 3 == 0 and x != 0:
        print("Fizz")
    elif x % 5 == 0 and x != 0:
        print("Buzz")
    else:
        print(x)
    x += 1
