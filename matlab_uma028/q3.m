clc;
clear all
x=0:0.01:1;
y=2*x;
z=x.^2;
figure
subplot(1,2,1)
plot(x,y);
subplot(1,2,2)
plot(x,z);
