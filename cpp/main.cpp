/*
    Program: FactorialCalculator
    Amaç: Bu program, kullanıcı tarafından girilen bir tam sayının faktöriyelini hesaplar ve sonucu ekrana yazdırır.
    Özellikler:
        - Kullanıcıdan alınan tam sayının faktöriyelini hesaplar.
            - Negatif sayıların faktöriyeli tanımlı olmadığı için negatif sayı girilmesi durumunda kullanıcıyı bilgilendirir.
            - 0! tanım gereği 1 olarak kabul edilir ve doğru şekilde hesaplanır.
    Sürüm: 1.0.0
    Yazar: Burhan Arıkan
*/

#include <iostream> // Giriş ve çıkış işlemleri için

int main() {
    int sayi; // Kullanıcıdan alınacak sayıyı tutar.
    unsigned long long faktoriyel = 1; // Faktöriyel sonucu için (büyük sayılar için uygun veri tipi).

    // Kullanıcıdan sayı alma
    std::cout << "Faktöriyelini hesaplamak istediğiniz bir tam sayı girin: ";
    std::cin >> sayi; // Kullanıcının girdiği sayı sayi değişkenine atanır.

    // Negatif sayı kontrolü
    if (sayi < 0) {
        // Negatif sayıların faktöriyeli matematiksel olarak tanımlanmadığı için kullanıcı bilgilendirilir.
        std::cout << "Negatif sayıların faktöriyeli hesaplanamaz!" << std::endl;
    } else {
        // Faktöriyel hesaplama
        for (int i = 1; i <= sayi; i++) {
            faktoriyel *= i; // faktoriyel = faktoriyel * i
        }

        // Sonucu ekrana yazdırma
        std::cout << sayi << "! = " << faktoriyel << std::endl;
    }

    return 0;
}

/*
c++ açıklamaları:

unsigned long long -> 
    - Faktöriyel hesaplaması sırasında çok büyük sayılar döndüğü için bu veri tipi tercih edilir.
    - Örneğin, `int` tipi sadece 2,147,483,647’ye kadar değer alabilir, ancak `unsigned long long` çok daha büyük değerlere izin verir.
    
for (başlangıç; koşul; artırma) { ... } -> 
    - Belirli bir koşula kadar işlemleri tekrarlayan bir döngüdür.
    - Bu örnekte:
        - **Başlangıç:** `int i = 1` → Döngü 1’den başlar.
        - **Koşul:** `i <= sayi` → i, sayi değerine ulaşana kadar devam eder.
        - **Artırma:** `i++` → i her turda 1 artar.
    - Döngü içindeki işlem: faktoriyel *= i (faktoriyel çarpma işlemi ile güncellenir).
    - Kullanıcı sayi = 0 girdiğinde, for döngüsü şu şekilde çalışır:
        for (int i = 1; i <= 0; i++) {
        faktoriyel *= i; // Bu işlem gerçekleşmez çünkü koşul baştan sağlanmaz.
        } 
            Başlangıç: i = 1 yani Koşul: i <= 0 (false olduğu için döngüye girilmez).
    - Kullanıcı sayi = 5 girdiğinde for döngüsü şu şekilde çalışır:
        İlk tur: faktoriyel = 1 * 1 = 1
        İkinci tur: faktoriyel = 1 * 2 = 2
        Üçüncü tur: faktoriyel = 2 * 3 = 6
        Dördüncü tur: faktoriyel = 6 * 4 = 24
        Beşinci tur: faktoriyel = 24 * 5 = 120

faktoriyel *= i; -> faktoriyel değişkeni, i ile çarpılarak güncellenir.
*/
