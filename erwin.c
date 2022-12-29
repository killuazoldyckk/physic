#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    char ulang;
    int a,b,c,d,e,f,g,h,m,j,k,r;
    printf("STIKOM CKI Cengkareng\n");
    printf("Nama = Agus Budi Prastono\n");
    printf("Kelas = Malam\n");
    printf("Semester = 1\n");
    printf("Selamat Datang Diprogram Saya\n");
    printf("Rumus arah vektor Fisika Dasar\n");
    printf("\n");

    do{
        float besC=0, xc=0;

        printf("Silahkan Input 4 nilai gaya vektor \n");
        printf("\nMasukan Nilai Lengan 1 = ");
        scanf("%d",&d);
        printf("\nMasukan Nilai Force 1 = ");
        scanf("%d",&h);
        printf("\nMasukan Nilai Lengan 2 = ");
        scanf("%d",&e);
        printf("\nMasukan Nilai Force 2 = ");
        scanf("%d",&m);
        printf("\nMasukan Nilai Lengan 3 = ");
        scanf("%d",&f);
        printf("\nMasukan Nilai Force 3 = ");
        scanf("%d",&j);
        printf("\nMasukan Nilai Lengan 4 = ");
        scanf("%d",&g);
        printf("\nMasukan Nilai Force 4 = ");
        scanf("%d",&k);

        int a[4]={d,e,f,g},b[4]={h,m,j,k},c[4],r=h+m+j+k;
        printf("Lengan\tForce\tTorsi\n");
        for(int i=0;i<4;i++)
        { 
            c[i]=a[i]*b[i];
            printf("%d\t%d\t%d\n", a[i],b[i],c[i]);
            besC =  besC+c[i];
        }
        besC = (besC);
        printf("Total Torsi = %.0f mN\n",besC);
        printf("Resultan = %d N \n",r);
        xc = besC / r;
        printf("XC = %f",xc);
        printf("\n\n");
        printf("Hitung baru lagi Y/N = ");
        scanf("%c", &ulang);
    }
    while( (ulang == "y") || (ulang == "Y") );

}
