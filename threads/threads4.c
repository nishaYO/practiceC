// deadlock case 

#include <stdio.h>
#include <pthread.h>

pthread_t thread1, thread2;
pthread_mutex_t lock1, lock2;

void *transaction1(void *arg){
    pthread_mutex_lock(&lock1);
    printf("locked table1 in transaction 1\n");

    sleep(10); // causing some delay to show deadlock case

    pthread_mutex_lock(&lock2);
    printf("locked table2 in transaction 1\n");

    pthread_mutex_unlock(&lock2);
    printf("unlocked table2 in transaction 1\n");

    pthread_mutex_unlock(&lock1);
    printf("unlocked table1 in transaction 1\n");

    return NULL;
}

void *transaction2(void *arg){
    pthread_mutex_lock(&lock2);
    printf("locked table2 in transaction 2\n");

    pthread_mutex_lock(&lock1);
    printf("locked table1 in transaction 2\n");

    pthread_mutex_unlock(&lock1);
    printf("unlocked table1 in transaction 2\n");

    pthread_mutex_unlock(&lock2);
    printf("unlocked table2 in transaction 2\n");


    return NULL;
}

int main(){
    pthread_mutex_init(&lock1, NULL);
    pthread_mutex_init(&lock2, NULL);

    printf("Starting both threads 1 and 2\n");

    pthread_create(&thread1, NULL, transaction1, NULL);
    pthread_create(&thread2, NULL, transaction2, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Threads finished.\n");
    pthread_mutex_destroy(&lock1);
    pthread_mutex_destroy(&lock2);

    return 0;
}