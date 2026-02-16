clc;
clear all;
n=1000;
win=0
for sim=1:n
    x=randi(20);
    y=randi([x 25]);
    if (y>21)
        win=win+1;
    end
end
win/n

