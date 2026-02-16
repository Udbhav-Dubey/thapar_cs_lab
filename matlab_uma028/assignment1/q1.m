clc;
clear all;
prob=0;
n=0;
k=1;
p=1;
while prob<0.5
    n=n+1;
    p=p*(365-k+1)/365;
    k=k+1;
    prob=1-p;
end
n

