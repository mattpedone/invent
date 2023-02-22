rm(list=ls())
set.seed(121)

library(invent)
library(parallel)
library(doParallel)

# Parallel
cor_all <- 10 #detectCores() - 1 #cores to be allocated
K <- 5
nobs <- 50
p <- 10
#iterations <- 100
data_list <- list()
for(k in 1:K){
  data_list[[k]] <- invent::gendata(n_obs = nobs, p = p, scenario = 1, nnnc = 3)
}

registerDoParallel(cores = cor_all)

iterations <- 100
myres0 <- foreach(k = 1:K, .packages = "invent") %dopar% {
    data <- data_list[[k]]
    y <- data$Y
    x <- data$X
    
    res0 <- invent::nlivcC(y, x, iter = iterations, burnin = iterations/2, thin = 5)
    return(res0)
}
