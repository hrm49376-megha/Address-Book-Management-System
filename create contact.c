#include "contact.h"
int create_contact(AddressBook *addressbook)
{
    int i=1;
    while(i)
    {
        while(1)
        {
            char name[10];
            printf("\nEnter the name: ");
            scanf(" %[^\n]",name);
            getchar();
            if(!valid_name(name))
            {
                continue; 
            }
           strcpy(addressbook->contact_details[addressbook->contact_count].Name,name);
           break;
        }
        while(1)
        {
            char mobilenumber[100];
            printf("\nEnter the mobile number: ");
            scanf(" %[^\n]",mobilenumber);
            getchar();
            if(!valid_mobile(mobilenumber))
            {
                continue;
            }
            if(!duplicate_mobile(mobilenumber,addressbook))
            {
                continue;
            }
            strcpy(addressbook->contact_details[addressbook->contact_count]. Mobile_number,mobilenumber);
            break;
        }
        while(1)
        {
            char email_id[35];
            printf("\nEnter the email ID: ");
            scanf(" %[^\n]",email_id);
            getchar();
            if(!valid_email(email_id))
            {
              continue;
            }
            if(!duplicate_email(email_id,addressbook))
            {
                continue;
            }
            strcpy(addressbook->contact_details[addressbook->contact_count].Mail_ID,email_id);
            break;
        }
       addressbook->contact_count++;
       printf("\nDo you want to add another contact?\n1. Yes\n0. No\n");
       printf("\npls select one option: ");
       scanf(" %d",&i);
       getchar();

    }
}