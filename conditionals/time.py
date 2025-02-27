#Gavin Woodhouse, How to get the time of day in Python

import time
#Below is the first time that the time was recorded in programming
#print(time.gmtime())

#Current time in seconds since gmtime
current = time.time()

#Current time as we're used to seeing it
now = time.ctime(current)
print(now)

#Get just the hour
local_time = time.localtime(current)
hour = local_time.tm_hour
minutes = local_time.tm_min
print(hour)