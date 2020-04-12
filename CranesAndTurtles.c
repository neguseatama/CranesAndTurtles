/*
 C言語による鶴亀算
 https://neguse-atama.hatenablog.com
*/
#include <stdio.h>
int main(void){
    int clane_turtle_individual,clane_turtle_totalfeet,clane_answer,turtle_answer;
    int all_individual,individual1,individual2,total,difference,quantity1,quantity2;
    int number,again;
    do{
        printf("鶴亀算を計算します。\n");
        printf("1.鶴と亀の場合\n2.他の動物の場合\n");
        printf("以上から1,2のどちらかを選び、入力してください:");
        scanf("%d",&number);
        if(number==1){
            printf("鶴と亀の個体数の総和を入力してください:");
            scanf("%d",&clane_turtle_individual);
            printf("足の本数の総和を入力してください:");
            scanf("%d",&clane_turtle_totalfeet);
            clane_answer=(clane_turtle_individual*4-clane_turtle_totalfeet)/(4-2);
            turtle_answer=clane_turtle_individual-clane_answer;
            printf("求める鶴の数は%d羽、また求める亀の数は%d頭です。\n",clane_answer,turtle_answer);
        }else if(number==2){
            printf("2種の動物の個体数の総和を入力してください:");
            scanf("%d",&all_individual);
            printf("2種の動物のそれぞれの足の本数を入力してください\n");
            printf("一種は:");
            scanf("%d",&individual1);
            printf("もう一種は:");
            scanf("%d",&individual2);
            printf("足の本数の総和を入力してください:");
            scanf("%d",&total);
            difference=total-all_individual*individual1;
            if(individual1>individual2){
                quantity1=difference/(individual1-individual2);
                quantity2=all_individual-quantity1;
                printf("一方の個体数は%d、もう一方の個体数は%dです。\n",quantity1,quantity2);
            }else if(individual1<individual2){
                quantity2=difference/(individual2-individual1);
                quantity1=all_individual-quantity2;
                printf("一方の個体数は%d、もう一方の個体数は%dです。\n",quantity1,quantity2);
            }
        }else if(number!=1 && number!=2){
            printf("1,2以外の数を入力しないでください。\n");
        }
        printf("計算をやり直しますか。・・・(0)はい (1)いいえ:");
        scanf("%d",&again);
    }while(again==0);
    return (0);
}