#Gavin Woodhouse, Tatiana Susov, Andrea Lugo, Ali Walton, Quiz
import time
#Function for score table, makes sure that after each question that is correct a point is added, score will be printed at end of game.
score = 0 
#Function for questions, Gavin

def question(prompt):
    return input(f"{prompt}?\n")

def answer(correct):
    if guess == correct:
        print("cool")
        score +=1      
    else:
        print("nah")
guess = question("Can you tell me the time")
answer("yes")    

#Loop to print questions with a random function, Ali
import random

num=1
rand = random.randint(1,19)
#Conditional to say whether answer to question was correct or not, Tatiana