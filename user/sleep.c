/**
 * @file sleep.c
 * @author fxd (fanxiaodong@buaa.edu.cn)
 * @brief 
 * @version 0.1
 * @date 2022-05-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(2, "Usage: sleep time\n");
        exit(1);
    }
    sleep(atoi(argv[1]));
    exit(0);
}