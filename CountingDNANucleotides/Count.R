library(stringr)

Infile = "~/Desktop/ROSALIND/CountingDNANucleotides/data.txt"

data = read.delim(Infile, header = FALSE, sep = "", stringsAsFactors=FALSE)

dna = str_split(data[[1]],'')
dna = dna[[1]]

baseA = length(which(dna=='A'))
baseG = length(which(dna=='G'))
baseC = length(which(dna=='C'))
baseT = length(which(dna=='T'))

base = c(baseA,baseG,baseC,baseT)
print(base)
