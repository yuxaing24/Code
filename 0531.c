#include<stdio.h>
#include<stdlib.h>

// 傳入值: arr: 整數陣列, size: 整數陣列的大小, data: 想要搜尋的資料
// 回傳值: 存在時回傳data在arr中的索引值，否則回傳-1
int search(int* arr, int size, int data) {
    int i;
    for(i = 0 ; i < size ; i++) {
        if(arr[i] == data) {
            return i;
        }
    }
    return -1;
}

// 傳入值: arr: 整數陣列, size: 整數陣列大小, index: 欲刪除資料的索引值
// 回傳值: 回傳刪除資料後新的陣列大小
int del(int* arr, int size, int index) {
    int i;
    for(i = index+1 ; i<size ; i++) {
        arr[i-1] = arr[i]; // 從index+1開始，後面的資料覆蓋前面的資料
    }
    return size-1;
}

void printArr(int* arr, int size) {
    int i;
    for(i=0;i<size;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 傳入值: arr: 整數陣列, size: 整數陣列大小
// 傳入值: index: 欲插入資料的位置, data: 欲插入資料
// 回傳值: 回傳插入資料後新的陣列大小
int insert(int* arr, int size, int index, int data) {
    int i;
    for(i=size-1 ; i>=index ; i--) {
        arr[i+1] = arr[i];
    }
    arr[index] = data;
    return size+1;
}

int main() {
    int nums[10] = {3, 5, 8, 10};
    int size = 4;
    int choice = 0;
    int data, index;
    do {
        printf("1) show; 2 search; 3) insert; 4) del 0) exit : ");
        scanf("%d", &choice);
        switch(choice) {
        case 0: // exit
            printf("Bye...\n");
            return EXIT_SUCCESS;
        case 1: // show
            printArr(nums, size);
            break;
        case 2: // search
            scanf("%d", &data);
            printf("%d\n", search(nums, size, data));
            break;
        case 3: // insert
            scanf("%d %d", &index, &data);
            size = insert(nums, size, index, data);
            break;    
        case 4: // del
            scanf("%d", &index);
            size = del(nums, size, index);
            break;
        default:
            printf("Choice not found!\n");
        }
    } while(1);
    return EXIT_SUCCESS;
}


