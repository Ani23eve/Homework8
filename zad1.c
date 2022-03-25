#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define COUNT 10

typedef struct{
    char nameOfBook[150];
    char nameOfAutor[100];
    int pages;
    double price;
}Book;


void randInRange(int start, int end);

int main(){



    return 0;
}

void randInRange(int start, int end){
return (start+ rand() %(end-start+1));
}
int compareForBookname(const void* bk1, const void* bk2){
    Book* bok1 = (Book*)bk1;
    Book* bok2 = (Book*)bk2;
    return strcmp(bok1->nameOfBook, bok2->nameOfBook);
}
int compareForAuthor(const void* bk1, const void* bk2){
    Book* bok1 = (Book*)bk1;
    Book* bok2 = (Book*)bk2;
    return strcmp(bok1->nameOfAutor, bok2->nameOfAutor);

int compareForPrices(const void* bk1, const void* bk2){
    Book* bok1 = (Book*)bk1;
    Book* bok2 = (Book*)bk2;
    double price1=bok1->price;
    double price2=bok2 ->price;
    
    if(fabs(price1 - price2)<__DBL_EPSILON__){
        return 0;
    }
    else if(price1 > price2){
        return -1;
    }
    return 1;
  }
}
int compareForPages(const void* bk1, const void* bk2){
    Book* bok1 = (Book*)bk1;
    Book* bok2 = (Book*)bk2;
    return bok1->pages-bok2->pages;
}

void bubbleSort(void* arr, size_t n, size_t size, int (*comp)(const void*,const void*)){
   for (int i = 0; i < n-1; i++){
       for (int j = 0; j < (n-i-1) * size; j += size){
           if (comp(arr + j, arr + j + size) < 0){
              swapg(arr + j, arr + j + size, size);
              // &arr[j] => arr + j
              // &arr[j + 1] => arr + j + 1
           }
       }
   }
}