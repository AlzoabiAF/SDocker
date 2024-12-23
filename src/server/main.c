#include <fcgi_stdio.h>
#include <stdlib.h>

int main(void) {
    // Основной цикл обработки запросов
    while (FCGI_Accept() >= 0) {
        // Заголовок ответа
        printf("Content-Type: text/html\r\n\r\n");
        // Содержимое HTML
        printf("<html><head><title>Hello World</title></head>\n");
        printf("<body><h1>Hello World!</h1></body></html>\n");
    }
    return 0;
}
