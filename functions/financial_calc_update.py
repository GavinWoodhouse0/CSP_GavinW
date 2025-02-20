# Gavin Woodhouse, Financial Calculator Update Python

def info(income, amount, type,):
    type_percent = amount/income*100
    print(f"You spend ${amount:.2f} on {type} and that is {type_percent:.0f}% of your income")

# Write a print statement telling the user what the program is (Budget calculator)
print("This is a budget calculator. Type in your monthly spending to how much of your income you spend.")
# Ask for monthly income (User input)
income = float(input("What is your monthly income?\n"))
# Ask for rent amount (User input)
rent = float(input("What is your monthly rent?\n"))
# Ask for utilities amount (User input)
utilities = float(input("How much do you spend on utilities every month?\n"))
# Ask for groceries income (User input)
groceries = float(input("How much do you spend on groceries every month?\n"))
# Ask for transportation income (User input)
transportation = float(input("How much do you spend on transportation every month?\n"))
# Calculate savings as 10% of income (variable)
savings = income/10
# Calculate spending money income - (rent+utilities+groceries+transportation+savings) (variable)
spending = income - (rent+utilities+groceries+transportation+savings)

info(income, rent, "rent")
info(income, utilities, "utilities")
info(income, groceries, "groceries")
info(income, transportation, "transportation")
info(income, savings, "savings")
info(income, spending, "everything in total")