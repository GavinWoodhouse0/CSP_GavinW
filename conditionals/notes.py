#Gavin Woodhouse, Conditionals Notes Python

#print("Hello, welcome to my program that will sort you into a catergory")

#name = input("What is your name:\n")

#if name == "Gavin":
    #print("You can't be me, I'm me!")
#else:
    #print("Alright!")



#num = int(input("How many would you like (give me a number above 0):\n"))

#if num == 1:
    #print("You have asked for an item")
#elif num <= 3:
    #print("You have asked for a couple of items")
#elif num <= 5:
    #print("You have asked for a few of items or are southern and asked for a couple of items")
#else:
    #print("You have asked for some items")

#name = "Gavin"

#if "a" in name or "e" in name or "i" in name or "o" in name or "u" in name:
    #print("Your name has a vowel!")
#else:
    #print("Your name doesn't have a vowel.")

num = 6

if num > 5 and num < 10:
    if num == 7:
        print(f"{num} is an unlucky number!")
    else:
        print(f"{num} is a large single digit number")
else:
    print(f"That is {num}")