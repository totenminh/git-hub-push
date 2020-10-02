#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    float tien_ban_dau = 3000;
    int        so_nam = 10;
    float tien_ve_sau = tien_ban_dau;
    for(int i = 0; i < so_nam; i = i + 1){
        float lai = tien_ve_sau * (12.5 /100.0);
        tien_ve_sau += lai;
        printf("lai = %.f, \ttien hien tai = %.f, \t sau %d nam\n", lai, tien_ve_sau, i+1);
    }
    printf("tien ban dau = %.f, tien ve sau = %.f, gap %.f lan\n",tien_ban_dau, tien_ve_sau, tien_ve_sau/tien_ban_dau);
}
