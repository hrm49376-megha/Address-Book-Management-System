#include "contact.h"
int save_contacts(AddressBook *addressbook)
{
    FILE *fptr=NULL;
    fptr=fopen("data.txt","w");
    if(fptr==NULL)
    {
        printf("File is not found or could not be opened\n");
        return 0;
    }
    fprintf(fptr,"#%d\n",addressbook->contact_count);
    for(int i=0; i<addressbook->contact_count; i++)
    {
        fprintf(fptr,"%s, %s, %s\n",
        addressbook->contact_details[i].Name,
        addressbook->contact_details[i].Mobile_number,
        addressbook->contact_details[i].Mail_ID);
    }
    fclose(fptr);
    return 1; //success 
}
int load_contact_file(AddressBook *addressbook)
{
    FILE *fptr=NULL;
    fptr=fopen("data.txt","r");
    if(fptr==NULL)
    {
        printf("File not found!\n");
        return 0;
    }
    fscanf(fptr,"#%d\n",&addressbook->contact_count);
    for(int i=0; i<addressbook->contact_count; i++)
    {
        fscanf(fptr,"%[^,], %[^,], %[^\n]\n",
        addressbook->contact_details[i].Name,
        addressbook->contact_details[i].Mobile_number,
        addressbook->contact_details[i].Mail_ID);
    }
    fclose(fptr);
    return 1;
    
}