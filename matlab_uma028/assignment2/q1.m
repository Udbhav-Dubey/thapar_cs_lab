clc;
clear all;
n=10000;
total=0;
for sim=1:n
    packets=0;
    collected=[];
    while length(unique(collected))<365
        new=randi(1:365);
        collected=[collected new];
        packets=packets+1;
    end
    total=total+packets;
end
packets/n

