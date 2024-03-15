#include <stdio.h>


union WorkerData {
    char workerName[50];
    float salary;
};

struct Worker {
    union WorkerData data;
};

int main() {
    
    struct Worker workers[2];

    
    printf("Enter the name of the first worker: \n ");
    scanf("%s", workers[0].data.workerName);

    
    printf("Enter the salary of the first worker: \n ");
    scanf("%f", &workers[0].data.salary);

    
    printf("Enter the name of the second worker: \n");
    scanf("%s", workers[1].data.workerName);
    printf("Enter the salary of the second worker: \n");
    scanf("%f", &workers[1].data.salary);

    
    printf("\nWorker 1\n");
    printf("Name: %s\n", workers[0].data.workerName);
    printf("Salary: %.2f\n\n", workers[0].data.salary);

    printf("Worker 2\n");
    printf("Name: %s\n", workers[1].data.workerName);
    printf("Salary: %.2f\n", workers[1].data.salary);

    return 0;
}
