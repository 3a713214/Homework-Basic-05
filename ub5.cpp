#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{
   int hr1,mim1,sec1,hr2,mim2,sec2,allhr,allmim,allsec,time; 
    printf("�п�J�_�l�ɶ��G");
    scanf("%d:%d:%d", &hr1, &mim1, &sec1);  
    printf("�п�J�����ɶ��G");
    scanf("%d:%d:%d", &hr2, &mim2, &sec2); 
    allhr = hr1-hr2; 
    allmim  = mim1-mim2;   
    allsec  = sec1-sec2;   
	allhr = abs(allhr); 
    allmim = abs(allmim);   
    allsec = abs(allsec);  
    time = allhr * 3600 + allmim * 60 + allsec; 
    printf("\n��Ӯɶ����j��Ƭ�: %d\n", time); 
    system("pause"); 
    return 0; 
}
