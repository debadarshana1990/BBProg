typedef struct Tool
{
    char name[20];
    int (*usage)(int code);
    
}Tool;