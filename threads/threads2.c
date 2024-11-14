// Race condition in shared resource

#include <stdio.h>
#include <pthread.h>

int counter = 0;

void *increaseCounter(void *arg){
    for(int i=0; i<1000000; i++){
        counter++;
    }
    return NULL;
}

int main(){
    pthread_t thread1, thread2; 
    pthread_create(&thread1, NULL, increaseCounter, NULL);
    pthread_create(&thread2, NULL, increaseCounter, NULL);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    printf("Value of Counter : %d\n", counter); // expected value : 2000000 but actual value is lesser than that becasue both threads maybe writing at the same time.
    return 0;
}