clc ;
clear all;
prob=0;
p=1;
n=0;
while prob<0.5
    n=n+1;
    p=p*365/364;
    prob=1-p;
end
