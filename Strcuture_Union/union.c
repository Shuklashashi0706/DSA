#include <stdio.h>
struct store
{
    double price; // common property for both books and shirt
    union         // union is used here to save the memory spcae as its members share the same memory location
    {
        struct
        {
            char *title; //char *title is used for storing string
            char *author;
            int number_pages;
        } book;

        struct
        {
            int color;
            int size;
            char *design;
        } shirt;
    } item;
};
//Note:We can access only one member of union at a time(sirf ek hi member ko access kr skte he union me )

int main()
{
    struct store s;
    //here we are accessing only book member of union 
    s.item.book.title = "C programming";
    s.item.book.author = "John";
    s.item.book.number_pages = 189;
    printf("Size is %ld", sizeof(s));
    return 0;
}