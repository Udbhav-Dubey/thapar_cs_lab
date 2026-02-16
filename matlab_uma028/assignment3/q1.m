clc;
clear all;
k=10;
N=20;
n=10000;
K=k;
loss=0;
for sim=1:n
    while(k>0&&k<N)
        k=K;
        x=randi[0 1];
        if (x==0)
            k=k+1;
        else
            k=k-1;
        end
    end
    if (k==0)
        loss=loss+1;
    end
end
loss/n
