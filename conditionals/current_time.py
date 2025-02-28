#Gavin Woodhouse, How to get the time of day in Python

import time
current = time.time()

local_time = time.localtime(current)

hour = local_time.tm_hour

if hour > 4 and hour <= 12:
    print("Good morning!")
elif hour > 12 and hour <= 20:
    print("Good afternoon!")
else:
    print("Good evening!")