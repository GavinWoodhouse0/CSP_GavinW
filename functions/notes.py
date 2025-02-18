#Gavin Woodhouse, Functions Notes in Python

#Function is an action stored in a key word

#def add(numOne, numTwo):#parameters go in the parenthesis seperated by commas
    #numOne = int(input("Give me a number:\n"))
    #numTwo = int(input("Give me another number:\n"))
    #print(numOne+numTwo)

#number = int(input("Can I get a number:\n"))
#add(12,20)#arguements are given when the function is called AND must match the number of parameters
#add(7,1)
#add(int(input("Tell me a number:\n")),number)

def user(word):
    return input(f"Tell me a {word}:\n")

name = user("name")
verb = user("verb")
place = user("place")
print(f"{name} was {verb} and somewhow got to {place}.")