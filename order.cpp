#include <stdio.h>

struct Order {
    int order_id;
    int manager_id;
    int client_id;
    char order_date[20];
    float amount;
};


void print_order(const Order &order) {
    printf("order_id=%d, manager_id=%d, client_id=%d, order_date=%s, amount=%.2f\n", 
           order.order_id, 
           order.manager_id, 
           order.client_id, 
           order.order_date, 
           order.amount);
}

int main() {
    FILE *file = fopen("order.txt", "r");

    Order orders[100]; 
    int i = 0;     
    
    while (fscanf(file, "%d;%d;%d;%[^;];%f\n", 
                  &orders[i].order_id,   
                  &orders[i].manager_id, 
                  &orders[i].client_id,  
                  orders[i].order_date,  
                  &orders[i].amount)     
           == 5) { 
        i++; 
    }

    fclose(file); 

   
    return 0;
}
