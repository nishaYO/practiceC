#include <stdio.h>
#include <pthread.h>

void *myfunc(void* arg){
    int num = *(int*)arg;
    printf("num value: %d\n", num);
    return NULL;
}

int main(){
    pthread_t thread1, thread2;
    int num1 = 1;
    int num2 = 2;
    pthread_create(&thread1, NULL, myfunc, (void*)&num1);
    pthread_create(&thread2, NULL, myfunc, (void*)&num2);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    return 0;
}