#Gavin Woodhouse, Strings Notes Python
# Words in programming (data type) "" ''

name = input("What is your name?\n").strip().capitalize()

print(f"Hello {name} welcome to my program.")

sentence = "The quick brown fox"
print(sentence.find("fox"))

word = sentence.find("fox")
#print(sentence[4:9])
#print(sentence[word:word+3])
#print(len(sentence))

percent = 89
print(f"Your grade is {percent:.1f}")