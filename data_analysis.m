data_in = dlmread('data_insertion');
figure; hold on
plot(data_in(:,1), mean(data_in(:,2:end),2), '-ok'); axis square; grid on
xlabel('Problem size, N')
ylabel('Number of swaps')

data_in2 = dlmread('data_bubble');
plot(data_in2(:,1), mean(data_in2(:,2:end),2), '-or'); axis square; grid on
data_in3 = dlmread('data_selection');
plot(data_in3(:,1), mean(data_in3(:,2:end),2), '-og'); axis square; grid on

