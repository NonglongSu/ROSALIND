library(stringr)

fileIn = "~/Desktop/ROSALIND/MRNA/data.txt"

data = read.delim(fileIn,header=FALSE,sep = "",stringsAsFactors=FALSE)

data1 = str_split(data[[1]],'')
dna = data1[[1]]

amc = c('F','L','S','Y','C','W','P','H','Q','R','I','M','T','N','K','V','A','D','E','G',"STOP")
freq = c(2,6,6,2,2,1,4,2,2,6,3,1,4,2,2,4,4,2,2,4,3)
df = data.frame(amc,freq, row.names=NULL)

x = dna
y = df
Count = function(x,y){
  total = 3
  t = table(x)
  for (i in 1:length(t)){
    name = names(t)[i]
    num = y[y$amc==name,][[2]]
    total = total * (num^t[[i]])
  }
  to = total %% 1000000
  return (to)
}

#probable complete loss of accuracy in modulus
# RNA is not designed to handle large number.
Count(dna,df)
