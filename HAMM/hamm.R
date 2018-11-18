rm(list=ls())
library(stringr)

filename="~/Desktop/ROSALIND/HAMM/data.txt"
main = function(f){
#Factor type cannot be separated
data=read.delim(f,header=FALSE, sep = "",stringsAsFactors=FALSE)
seq1=data[1,1]
seq2=data[2,1]

s1 = str_split(seq1,'')
s2 = str_split(seq2,'')
s1 = s1[[1]]
s2 = s2[[1]]
l = length(which(s1!=s2))
cat(l,sep = '\n',append = FALSE)
}

args = commandArgs(trailingOnly = TRUE)
main(filename)
