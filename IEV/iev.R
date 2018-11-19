rm(list=ls())

filename = "~/Desktop/ROSALIND/IEV/data.txt"
data=read.table(filename,header=FALSE,sep='')

sum = 2 *(data[1,1]*1 + data[1,2]*1 + data[1,3]*1 + data[1,4]*0.75 + data[1,5]*0.5 + data[1,6]*0)
print(sum)
