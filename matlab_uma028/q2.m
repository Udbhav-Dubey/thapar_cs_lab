clc;
clear all;
urn=[];
for i=1:100
    urn=[urn repmat(i,1,i)];
end
N=10000;
count=zeros(1,100);
for sim=1:N
    x=urn(randi(length(urn)));
    count(x)=count(x)+1;
end
sim=count/N;

