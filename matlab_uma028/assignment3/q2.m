clc;
clear all
n=10000;
count_valid=0;
count_2=0;
for sim=1:n
    prize=randi([1 3]);
    if prize<2
        count_valid=count_valid+1;
        if (prize==2)
            count_2=count+1;
        end
    end
end
count_2/count_valid
