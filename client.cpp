#include <stdio.h>
 struct Client {
    int client_id;
    char name[100];
    char city[100];
    int rating;
    int manager_id;
};

int main() {
        Client client = {2006, "Симонян", "Москва", 100, 100};
    printf("client_id=%d, client.name = %s, client.city = %s, client.rating = %d, client.manager_id %d\n", client.client_id, client.name, client.city, client.rating, client.manager_id);

    return 0;
}