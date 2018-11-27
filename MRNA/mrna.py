#! /usr/bin/env python

#Python can handle large caculations.
from sys import argv
script, filename = argv

RNA_Codon_Table = {
        'F': 2,  'L': 6,  'S': 6,  'Y': 2,
        'C': 2,  'W': 1,  'P': 4,  'H': 2,
        'Q': 2,  'R': 6,  'I': 3,  'M': 1,
        'T': 4,  'N': 2,  'K': 2,  'V': 4,
        'A': 4,  'D': 2,  'E': 2,  'G': 4,
        'STOP': 3
}


def count(st):
    num = RNA_Codon_Table.get('STOP')
    for c in st:
        freq = RNA_Codon_Table.get(c)
        num *= freq
    return num


if __name__ == '__main__':

    # Read file into string and strip the trailing/leading spaces.
    small = "MA"
    print(count(small)%1000000)
    dataset = open(filename).read().strip()
    print(count(dataset) % 1000000)
