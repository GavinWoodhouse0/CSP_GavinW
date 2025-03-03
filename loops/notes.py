#Gavin Woodhouse, Loops Notes in Python

#What is a loop? 
    #A loop is a section of code that is going to repeat.

#What are the two types of loops?
    #While loop
x = 0
while x < 10:
    print("Hello", x)
    x += 1

    #For loop
nums = [3,5,7,2,8]
for num in nums:
    print(num)

#What is iteration
    #The act of repeating something.

#What are lists? 
    #A bunch of values in the same variable.

#How do you make lists in python?
    siblings = ["Alex", "Katie", "Andrew", "Vienna", "Tori", "Treyson", "Jeff", "Hailey"]
    #Print one item from the list.
    print(siblings[3])
    #Change an item in a list.
    siblings[7] = "Jake"
    #Remove an item from the list.
    siblings.pop(5)
    print(siblings)
 
#How do you make for loops in python? 
num = 1
for sibling in siblings:
    print(f"{num}. {sibling}, LaRose")
    num += 1

for num in range(1,11, 2):
    print(num)

#How do you make while loops in python?
import random

num = 1
rand = random.randint(1,20)
while num < 21:
    if num == rand:
        print(f"Goose!")
        break
    else:
        print("Duck")
    num += 1