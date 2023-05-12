#include <windows.h>

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;
    int cnt = 0;

    fp1 = fopen("image.bmp", "rb");
    fp2 = fopen("copy.bmp", "wb");

    while (fread(&ch, 1, 1, fp1) == 1)
    {
        fwrite(&ch, 1, 1, fp2);
        cnt++;
    }

    printf("Total number of bytes copied: %d\n", cnt);

    fclose(fp1);
    fclose(fp2);

    return 0;
}
