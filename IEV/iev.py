#! /usr/bin/env python
from sys import argv
script, filename = argv
import csv

data = []
with open(filename,'r') as f:
    reader = csv.reader(f,delimiter=' ')
    for row in reader:
        for col in row:
            data.append(float(col))
# Raw input return a sequence of chars.
Total = 2 * (data[0]*1 + data[1]*1 + data[2]*1 + data[3]*0.75 + data[4]*0.5 + data[5]*0)
print(Total)

f.close()
