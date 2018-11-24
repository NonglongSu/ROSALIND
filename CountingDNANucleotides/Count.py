#! /usr/bin/env python

from sys import argv
script,file = argv

#replace linefeed to blank space
with open(file,'r') as f:
    data = f.read().replace('\n',"")


dict = {"A":0,"G":0,"C":0,"T":0}


for c in data:
    keys = dict.keys()
    if c in keys:
        dict[c] += 1
    else:
        dict[c] = 1

print "Base frequency in a DNA sequence:",dict
