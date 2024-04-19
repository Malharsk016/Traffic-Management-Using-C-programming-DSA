#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

typedef struct TrafficLight {
    int greenTime;
    int yellowTime;
    int redTime;
    int pedestrianSignal;
} TrafficLight;

typedef struct Queue {
    TrafficLight timer;
    struct Queue* next;
} Queue;


void enqueue(Queue** pointer_head, TrafficLight timer) {
    Queue* newQueue = (Queue*) malloc(sizeof(Queue));
    newQueue->timer = timer;
    newQueue->next = NULL;

    if (*pointer_head == NULL)
    {
        *pointer_head = newQueue;
        (*pointer_head)->next = *pointer_head;
    }
    else
    {
        newQueue->next = (*pointer_head)->next;
        (*pointer_head)->next = newQueue;
        *pointer_head = newQueue;
    }
}

void dequeue(Queue** pointer_head) {
    if (*pointer_head == NULL) {
        return;
    }

    if ((*pointer_head)->next == *pointer_head)
    {
        free(*pointer_head);
        *pointer_head = NULL;
    }
    else
    {
        Queue* temp = (*pointer_head)->next;
        (*pointer_head)->next = temp->next;
        free(temp);
    }
}

TrafficLight front(Queue* pointer_head) {
    if (pointer_head == NULL) {
        TrafficLight emptyTrafficLight = {0, 0, 0, 0};
        return emptyTrafficLight;
    }

    return pointer_head->timer;
}

int main() {
    Queue* trafficLights = NULL;
    TrafficLight trafficLight1 = {30000, 5000, 30000, 0};
    TrafficLight trafficLight2 = {30000, 5000, 30000, 1};
    enqueue(&trafficLights, trafficLight1);
    enqueue(&trafficLights, trafficLight2);

    Queue* current = trafficLights;
    while (current != NULL) {
        TrafficLight currentTrafficLight = front(current);
        printf("Green light of Traffic light 1 and Red light of Traffic light 2 for %d seconds\n", (currentTrafficLight.greenTime/1000));
        if (currentTrafficLight.pedestrianSignal)
        {
            printf("Pedestrian signal turns red\n");
            for(int i=(currentTrafficLight.greenTime/1000);i>=0;i--)
            {
                printf("%d",i);
                printf("\t");
                Sleep(1000); // 1-second delay
            }
        }
        else{
          for(int i=(currentTrafficLight.greenTime/1000);i>=0;i--)
            {
                printf("%d",i);
                printf("\t");
                Sleep(1000); // 1-second delay
            }
        }
        printf("\n");
        printf("Yellow light for %d seconds\n", (currentTrafficLight.yellowTime/1000));
        for(int i=(currentTrafficLight.yellowTime/1000);i>=0;i--)
            {
                printf("%d",i);
                printf("\t");
                Sleep(1000); // 1-second delay
            }
         printf("\n");
        printf("Red light of Traffic light 1 and Green light of Traffic light 2 for %d seconds\n", (currentTrafficLight.redTime/1000));
        if (currentTrafficLight.pedestrianSignal)
        {
            printf("Pedestrian signal turns green\n");
            for(int i=(currentTrafficLight.redTime/1000);i>=0;i--)
            {
                printf("%d",i);
                printf("\t");
                Sleep(1000); // 1-second delay
            }
        }
        else{
          for(int i=(currentTrafficLight.redTime/1000);i>=0;i--)
            {
                printf("%d",i);
                printf("\t");
                Sleep(1000); // 1-second delay
            }
        }
         printf("\n");
        current = current->next;
    }

    return 0;
}
