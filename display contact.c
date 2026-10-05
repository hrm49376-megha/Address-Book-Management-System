#include "contact.h"
void list_contacts(AddressBook *addressbook)
{
    if(addressbook->contact_count==0)
    {
        printf("No contacts available to display.\n");
        return;
    }
    printf("\n+----+----------------------+-----------------+--------------------------+\n");
    printf("| No | Name                 | Phone           | Email                    |\n");
    printf("+----+----------------------+-----------------+--------------------------+\n");

    for(int i = 0; i < addressbook->contact_count; i++)
    {
        printf("| %-2d | %-20s | %-15s | %-24s |\n",
        i + 1,
        addressbook->contact_details[i].Name,
        addressbook->contact_details[i].Mobile_number,
        addressbook->contact_details[i].Mail_ID);
    }

    printf("+----+----------------------+-----------------+--------------------------+\n");

}