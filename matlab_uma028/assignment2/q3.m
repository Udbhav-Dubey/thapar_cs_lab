clc;
clear all;
a=0;
b=0;
n=1000;
for sim=1:n
    while true
        x=randi([0 1]);
        if (x==0)
            a=a+1;
            break;
        end
        y=randi([1 4]);
        if (y<=0)
            b=b+1;
            break;
        end
    end
end
b/n;
