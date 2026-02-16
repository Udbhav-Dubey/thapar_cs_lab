clc;
clear all;
N=10000;
a=0;
b=0;
ab=0;
for sim=1:N
    deck=randperm(52);
    hand=deck(1:5);
    spades=sum(hand<=13);
    A=(spades>=4);
    B=(spades==5);
    if A 
        a=a+1;
    end
    if B
        b=b+1;
    end
    if A && B
        ab=ab+1;
    end
end
ab/a
