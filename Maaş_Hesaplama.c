#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,yenia,eskia,yuzdezamyen,yuzdezamesk;

    /* Eski maaslar: 2000 asasi %19
        2 -3 arasi %14
        3 ustu %9
    cocuk parasi 45 tl */




    printf("Maasinizi giriniz : ");
    scanf("%d", &a);

    if(a<2000)
    {
        printf("Cocuk sayisi giriniz: ");
        scanf("%d", &b);
        yuzdezamyen=a*0.2;
        yuzdezamesk=a*0.19;
        yenia=yuzdezamyen+b*30+a;
        eskia=yuzdezamesk+b*45+a;
        if(yenia>eskia)
            printf("Yeni maasiniz :%d ",yenia);
        else if(eskia>yenia)
            printf("Yeni maasiniz :%d ",eskia);
    }
    else if(a>=2000 && a<=3000)
    {
        printf("Cocuk sayisi giriniz: ");
        scanf("%d", &b);
        yuzdezamyen=a*0.15;
        yuzdezamesk=a*0.14;
        yenia=yuzdezamyen+b*30+a;
        eskia=yuzdezamesk+b*45+a;
        if(yenia>eskia)
            printf("Yeni maasiniz :%d ",yenia);
        else if(eskia>yenia)
            printf("Yeni maasiniz :%d ",eskia);
    }
    else if(a>3000)
    {
        printf("Cocuk sayisi giriniz: ");
        scanf("%d", &b);
        yuzdezamyen=a*0.1;
        yuzdezamesk=a*0.09;
        yenia=yuzdezamyen+b*30+a;
        eskia=yuzdezamesk+b*45+a;
        if(yenia>eskia)
            printf("Yeni maasiniz :%d ",yenia);
        else if(eskia>yenia)
            printf("Yeni maasiniz :%d ",eskia);
    }




    return 0;
}
