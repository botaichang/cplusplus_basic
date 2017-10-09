import numpy as np 

import time 

# multiplication
a = 3
start = time.time()
for i in range(100000):
	a *= 2
end = time.time()
print a
total = end - start
print total

# bit shift  
a = 3
start = time.time()
for i in range(100000):
	a <<= 1
end = time.time()
print a
total = end - start
print total
