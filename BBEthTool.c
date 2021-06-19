#include "stdio.h"
#include "stdlib.h"
#include "BBEthTool.h"

static int BBEthTool_usage(int code)
{
    switch(code)
    {
        case 1: printf(" Less Argument list ");
        break;
        default : break;
    }
    return 0;
}
static Tool List[3] = 
{
    {
        .name = "BBEthTool",
        .usage = BBEthTool_usage
    },
    {
        .name = NULL
    },
    {
        .name = NULL
    }
};
int main(int argc,char argv[])
{
    Tool *a;
    for(a = List;a->name;a++)
    {
        if (!strcmp(argv[0], a->name))
			break;
    }
    if(argc < 2)
        a->usage(1);
    if (!strcmp(argv[1], "read"))
		return BBEthTool_read(a, argc - 2, &argv[2]);

    return 0;
}