#include <stdio.h>
#include <stdlib.h>
#include "account.h"
#include "customer.h"
#include "csv.h"


int main() {

    Customer customer;
    constructCustomer(&customer);
    updateCustomer(&customer);
    displayCustomer(&customer);
    return 0;
}
