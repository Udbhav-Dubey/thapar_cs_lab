clc;
clear all;
p=1;
n=0;
prob=0;
while prob<0.99
    n=n+1;
    p=p*((365-n+1)/365);
    prob=1-p;
end
n
