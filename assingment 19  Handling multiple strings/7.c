#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM_IP_ADDRESSES 5
#define MAX_IP_LENGTH 16

int is_valid_ip(char *ip)
{
    int num_parts = 0;
    char *part = strtok(ip, ".");
    while (part != NULL)
    {
        int num = atoi(part);
        if (num < 0 || num > 255)
        {
            return 0;
        }
        num_parts++;
        part = strtok(NULL, ".");
    }
    return num_parts == 4;
}

int main()
{
    char ip_addresses[NUM_IP_ADDRESSES][MAX_IP_LENGTH] = {"192.168.0.1", "10.0.1.23", "256.0.0.1", "172.16.0.3", "abc.def.ghi.jkl"};

    // check whether each IP address is valid
    for (int i = 0; i < NUM_IP_ADDRESSES; i++)
        {
        if (is_valid_ip(ip_addresses[i]))
        {
            printf("%s is a valid IP address\n", ip_addresses[i]);
        }
    else
        {
            printf("%s is not a valid IP address\n", ip_addresses[i]);
        }
    }

    return 0;
}
