clc;
clear all;
B=3;
C=4;
d=5;
n=10000;
c1=0;
c2=0;
for sim=1:n
    b=B;
    c=C;
    if rand < c/(c+b)
        c=c+d;
        first=1;
    else 
        b=b+d;
        first=0;
    end
    if rand< c/(c+b)
        second=1;
    else
        second=0;
    end
    if (second==1)
        c1=c1+1;
    end
    if (first==1 && second==1)
        c2=c2+1;
    end
end
c1/n
c2/c1

