//Write aprogram to find the number of positive, negative and zeros in a sequence of inputs (numbers) entered as data.
#include <stdio.h>
int main (){
    printf("how many numbers do you want to enter : ");
    int n;
    scanf("%d",&n);
    int positives=0,negative=0,zeros=0;
    for (int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if (x>0){positives++;}
        else if (x==0){zeros++;}
        else negative++;
    }
    printf("the summary is \npositives : %d\nnegative : %d\nzeros : %d ",positives,negative,zeros);
return 0;
}
