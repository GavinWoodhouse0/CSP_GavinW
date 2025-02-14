#Gavin Woodhouse, Silly Sentences Python

print("Welcome to Legally-Distinct-to-MadLib, Follow the instructions to make a silly sentence!\n")
location = input("Type in a place you go to frequently.\n").strip().capitalize()
famous = input("Type in a celebrity's name.\n").strip().capitalize()
colour = input("Type in a color.\n").strip()
adverb = input("Type in an adverb (word that describes an action).\n").strip()
verb = input("Type in a verb (action) in the past tense.\n").strip()
print(location+ ", what a wonderful place it is. That's where I met "+ famous+ ". When I tried talking to them though, they turned a strange shade of "+ colour+ " and "+ adverb, verb+ " into the crowd. Never meet your heroes.\n")