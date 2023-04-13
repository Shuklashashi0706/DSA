#include <stdio.h>
// #pragma pack(1)
struct employee
{
    char a; // 1byte
    char b; // 1byte
    int n;  // 4bytes
} __attribute__((packed));;
// total size is 6 bytes
int main()
{   struct employee e1;
    printf("%d", sizeof(e1));
    // Gives 8bytes as a answer but the size as of
    // actual should be 6bytes but gives 8bytes due to 2 bytes of padding
    // Note:Using pragma directive padding can be avoided and gives 6bytes as the answer
    return 0;
}
