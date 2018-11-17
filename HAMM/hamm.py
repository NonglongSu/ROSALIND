#!/usr/bin/env python

from sys import argv
script, filename = argv

data = []
with open(filename, 'r') as f:
    for line in f:
        data.append(line)

count = sum(1 for a, b in zip(data[0], data[1]) if a != b)
print(count)
