#include "get_next_line.h"

void add()
{
    static int a = 1;
    a++;
    printf("\na: %d", a);
}

void pr(char *s)
{
    while (*s != 0)
        write(1, &*s++, 1);
}

void creatM()
{
    int a = creat("selam.txt", 0777);
    if (a < 0)
        pr("Hatalı işlem.");
    else
        pr("Dosya başarıyla oluşturuldu.");
}

void writeM()
{
    int fd = open("selam.txt", O_RDWR | O_CREAT, 0777);
    ssize_t ss = write(fd, "b", 1);
    if (ss < 0)
        pr("Başarısız yazdırma");
    else
        printf("yazıdırılan toplam byte: %zd", ss);
}

void openM()
{
 char *c = (char *)calloc(100, sizeof(char));

    int fd = open("selam.txt", O_RDWR | O_CREAT, 0777);
    ssize_t ss = read(fd, c, 3);
    if (ss < 0)
    {
        pr("okuma başarısız");
      
    }
    printf("okunan toplam byte: %zd", ss);
    printf("\nokunan değer: %s",c);
     close(fd);
}

int main()
{

    int fd = open("selam.txt", O_RDONLY);
    char *s = get_next_line(fd);
    printf("\n%%%%%%%%%%%%%%\n%s",s);

   

     

   

    //
}

// NOTLAR
// static değişken program boyunca aktif kalır.
// buffer size programa tanımlanan arabellektir. bir programın veri akışını sabit bir akışta tutar korur
// 5 tip i/o tipi vardır
//  1. create: ilk parametre dosya adı, ikinci parametre modu
// eğer oluşturulurken -1 dönerse hata verir.
//  2. open: ilk parametre dosya yolu, ikinci ise flagler

/*
O_RDONLY: read only,
O_WRONLY: write only,
O_RDWR: read and write,
O_CREAT: create file if it doesn’t exist,
O_EXCL: prevent creation if it already exists.
*/

// ssize_t size_t den farklı olarak -1 değerini bulundurabilir. buda i/o işlemlerinde kullanılır.