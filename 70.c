#include <stdio.h>
#include <stdlib.h>

#define ten 10

struct wordnum {
    int num;
    char *word;
    char *wordlvl;
};

int main(){

    int numb, scnd, scnd2, thr, thr2;
    
    struct wordnum s[ten*2] =  { {0,"Zero","Zero"}, {1,"One","Ten"}, {2,"Two","Twenty"},
        {3,"Three","Thirty"}, {4,"Four","Forty"}, {5,"Five","Fifty"}, {6,"Six","Sixty"},
        {7,"Seven","Seventy"}, {8,"Eight","Eighty"}, {9,"Nine","Ninety"},{10, "Ten", "Ten"}, 
        {11, "Eleven", "Eleven"}, {12, "Twelve", "Twelve"}, {13, "Thirteen", "Thirteen"}, 
        {14, "Fourteen", "Fourteen"}, {15, "Fifteen", "Fifteen"}, {16, "Sixteen", "Sixteen"}, 
        {17, "Seventeen", "Seventeen"}, {18, "Eighteen", "Eighteen"}, {19, "Nineteen", "Nineteen"}
    };

    printf("Please enter a number max(999): ");
    scanf("%d",&numb);

    if (numb < ten*10){
        scnd = numb % ten;
        thr = numb / ten;
        if (numb >= ten && numb < ten*2){
            printf("%s",s[numb].word);
        } else {
            for (size_t i = 0; i < ten; i++){
                if (thr == s[i].num){
                    printf("%s",s[i].wordlvl);
                }
            }
            for (size_t i = 0; i < ten; i++){
                if (scnd == s[i].num){
                    printf(" %s",s[i].word);
                }
            }
        }
    } else if (numb >= ten*10 && numb < ten*100){
        scnd2 = numb / ten % ten;
        scnd = numb % ten;
        thr2 = numb / (ten*10);
        for (size_t i = 0; i < ten; i++){
            if (thr2 == s[i].num){
                printf("%s hundred",s[i].word);
                break;
            }
        }
        if (numb % 100 >= ten && numb % 100 < ten*2){
            printf(" %s",s[numb % 100].word);
        }else{
            for (size_t i = 0; i < ten; i++){
                if (scnd2 == s[i].num){
                    printf(" %s",s[i].wordlvl);
                }
            }
            for (size_t i = 0; i < ten; i++){
                if (scnd == s[i].num){
                    printf(" %s",s[i].word);
                }
            }
        }  
   } 

    return 0;
}
