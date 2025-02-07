# Gavin Woodhouse, Financial Calculator Python

# Write a print statement telling the user what the program is (Budget calculator)
greeting = "This is a budget calculator. Type in your monthly spending to how much of your income you spend."
print(greeting)
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
spending = income-rent-utilities-groceries-transportation-savings
# Calculate percent of rent (rent/income)*100 (variable)
rent_percent = rent/income*100
# Calculate percent of utilities (utilities/income)*100 (variable)
utilities_percent = utilities/income*100
# Calculate percent of groceries (groceries/income)*100 (variable)
groceries_percent = groceries/income*100
# Calculate percent of transportation (transportation/income)*100 (variable)
transportation_percent = transportation/income*100
# Calculate percent of spending money (spending money/income)*100 (variable)
spending_percent = spending/income*100
# Calculate percent of spending money (spending money/income)*100 (variable)
savings_percent = savings/income*100
# Tell user catergory spending amount AND percent for rent ("You spend $XX.XX on rent and that is XX% of your income")
print("You spend $", round(rent,2), "on rent and that is ", rent_percent, "% of your income")
# Tell user catergory spending amount AND percent for utilities ("You spend $XX.XX on utilities and that is XX% of your income")
print("You spend $", round(utilities,2), "on utilities and that is ", utilities_percent, "% of your income")
# Tell user catergory spending amount AND percent for groceries ("You spend $XX.XX on groceries and that is XX% of your income")
print("You spend $", round(groceries,2), "on groceries and that is ", groceries_percent, "% of your income")
# Tell user catergory spending amount AND percent for transportation ("You spend $XX.XX on transportation and that is XX% of your income")
print("You spend $", round(transportation,2), "on transportation and that is ", transportation_percent, "% of your income")
# Tell user catergory spending amount AND percent for spending ("You spend $XX.XX on spending and that is XX% of your income")
print("You spend $", round(spending,2), "in total and that is ", spending_percent, "% of your income")
# Tell user catergory spending amount AND percent for saving ("You spend $XX.XX on savings and that is 10% of your income")
print("You save $", round(savings,2), "and that is ", savings_percent, "% of your income")