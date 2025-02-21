# Gavin Woodhouse, Financial Calculator Update Python

def info(income, amount, type):
    type_percent = amount/income*100
    print(f"You spend ${amount:.2f} on {type} and that is {type_percent:.0f}% of your income")

def money(expence):
    return float(input(f"What is your monthly {expence}?\n"))

# Write a print statement telling the user what the program is (Budget calculator)
print("This is a budget calculator. Type in your monthly spending to how much of your income you spend.")
# Ask for monthly income (User input)
income = money("income")
# Ask for rent amount (User input)
rent = money("rent")
# Ask for utilities amount (User input)
utilities = money("utility cost")
# Ask for groceries income (User input)
groceries = money("grocery cost")
# Ask for transportation income (User input)
transportation = money("transportation cost")
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