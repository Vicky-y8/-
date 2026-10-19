#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 你的 Package 和 PackageList 结构体原封不动放这里
typedef struct { int id; char receiver[20]; } Package;
typedef struct { Package data[10]; int length; } PackageList;

int main() {
    PackageList myStation;
    myStation.length = 0; // 驿站开门，0个包裹
    int choice;

    while (1) {
        printf("\n==== 菜鸟驿站管理系统 ====\n");
        printf("1. 录入新包裹\n");
        printf("2. 查看所有包裹\n");
        printf("0. 退出\n");
        printf("请选择: ");
        scanf("%d", &choice);  

        switch (choice) {
        case 1: {
            printf("请输入单号和姓名");
            Package p;
            scanf("%d %s", &p.id, p.receiver);
            myStation.data[myStation.length] = p;
            myStation.length++;
            // 【任务：录入】
            // 提示：当用户按 1，就让他输入单号和名字，存进 myStation 里。
            // 伪代码：
            // 1. 定义一个临时 Package p;
            // 2. 让用户用 scanf 输入 p.id 和 p.receiver
            // 3. myStation.data[myStation.length] = p; (利用当前长度当做下标，直接放末尾)
            // 4. myStation.length++;

            
            break;
        }
        case 2: {for (int i = 0; i < myStation.length; i++) {
            printf("%d号包裹：%s\n", myStation.data[i].id, myStation.data[i].receiver);
        }
            // 【任务：查看】
            // 提示：用 for 循环，从 0 打印到 myStation.length
            // for(int i=0; i<myStation.length; i++){
            //     printf("%d 号包裹: %s\n", myStation.data[i].id, myStation.data[i].receiver);
            // }

           
            break;
        }
        case 0: {
            printf("下班！\n");
            return 0;
        }
        default: {
            printf("输入错误！\n");
        }
        }
    }
    return 0;
}