#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h> 

struct DateOfIssue{
    int date;
    int month;
    int year;
};

struct Library
{
    int accessionNumber;
    char title[50];
    char author[30];
    float price;
    int flag;
    struct DateOfIssue date;
};

int randomNumber(){
    int number;
    srand(time(NULL));
    number = rand() % (50000-10000+1);
    return number;
}

int isPresent(struct Library lib[],int number, int *count){
    for(int i=0;i<*count;i++){
        if (lib[i].accessionNumber==number){
            return 1;
        }
    }
    return 0;
}

void addBookInfo(struct Library lib[], int *count){
    if (*count>=50){
        printf("Library is full!\n");
        return;
    }
    printf("How many books do you want to add?\n");
    int numberOfBooks;
    do
    {
        printf("Enter the number of books you want to add: \n");
        scanf("%d", &numberOfBooks);
    } while (numberOfBooks+(*count)>=50);
    
    for (int i = *count; i < *count+numberOfBooks; i++){

        do
        {
            lib[i].accessionNumber=randomNumber();
        } while (isPresent(lib, lib[i].accessionNumber, count));
        getchar();
        printf("-------------------------\nEnter title: ");
        gets(lib[i].title);
        printf("Enter author: ");
        gets(lib[i].author);
        printf("Enter price: ");
        scanf("%f", &lib[i].price);
        printf("Is the books issued?\n");
        do
        {
            printf("Enter '0' for NOT issued or '1' for issued\n");
            scanf("%d", &lib[i].flag);
        } while (lib[i].flag>1 || lib[i].flag<0);
        if(lib[i].flag==1){
            do{
                printf("Enter issue date\nDate: (XX) ");
                scanf("%d", &lib[i].date.date);
            } while(lib[i].date.date<1 || lib[i].date.date>31);
            do
            {
                printf("Enter month: (XX) ");
                scanf("%d", &lib[i].date.month);
            } while (lib[i].date.month>12 || lib[i].date.month<1);
            do
            {
                printf("Enter year: (XXXX) ");
                scanf("%d", &lib[i].date.year);
            } while (lib[i].date.year>2050 || lib[i].date.year<2000);
        }

    }
    

    printf("\n%d book(s) added succesfully\n\n", numberOfBooks);
    *count+=numberOfBooks;
}

void displayBookInfo(struct Library lib[], int *count){
    if(count==0){
        printf("The Library is empty\n");
        return;
    }
    for(int i=0;i<(*count);i++){
        printf("-----------------------\nAccession number: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", lib[i].accessionNumber, lib[i].title, lib[i].author, lib[i].price);
        if(lib[i].flag){
            printf("The books has been issued on: ");
            printf("%d/%d/%d\n", lib[i].date.date, lib[i].date.month, lib[i].date.year);
        } else{
            printf("The book has not been issued\n-----------------------\n");
        }
    }
}

void listallauth(struct Library lib[], int *count){
    char auth[30];
    getchar();
    printf("Enter the name of the author: ");
    gets(auth);
    for (int i = 0; i < *count; i++)
    {
        if (strcmp(auth, lib[i].author)==0)
        {
            printf("-----------------------\nAccession number: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", lib[i].accessionNumber, lib[i].title, lib[i].author, lib[i].price);
            if(lib[i].flag){
                printf("The books has been issued\n");
            } else{
                printf("The book has not been issued\n-----------------------\n");
            }
        }

    }

}

void listTitle(struct Library lib[], int *count){
    int acnum, flag=0;
    printf("Enter the accession number: ");
    scanf("%d", &acnum);
    for(int i=0;i<*count;i++){
        if(lib[i].accessionNumber==acnum){
            printf("\nTitle: %s\n", lib[i].title);
            flag=1;
        }
    }
    if(flag==0)
        printf("No book found with that accession number\n");
}

void listInAccNum(struct Library lib[], int *count){
    for(int i=0;i<*count;i++){
        for(int j=i+1;j<*count;j++){
            if(lib[j].accessionNumber<lib[i].accessionNumber){
                int temp;
                temp=lib[i].accessionNumber;
                lib[i].accessionNumber=lib[j].accessionNumber;
                lib[j].accessionNumber=temp;
            }
        }
    }
    displayBookInfo(lib, count);
}

int delete(struct Library lib[], char Title[50], int *count){
    for(int i=0;i<*count;i++){
        if (strcmp(Title, lib[i].title)==0){
            for(int j=i;j<*count;j++){
                lib[j]=lib[j+1];
            }
            return 1;
        }
    }
    printf("Book not found\n");
    return 0;
}

int main(int argc, char const *argv[])
{

    int count=0, currentAccession;
    struct Library lib[50];

    printf("===========\nABC Library\n===========\n");
    while(1){
        printf("\nEnter the number corresponding to the choice of operation\n");
        int choice;
        printf("1. Add book info\n2. Display Book info\n3. List all the books of a given author\n");
        printf("4. List the title of a specified book\n5. List the count of the books\n6. List the books in the order of accession number\n7. Delete\n8. Exit\n\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addBookInfo(lib, &count);
            break;

        case 2:
            displayBookInfo(lib, &count);
            break;

        case 3:
            listallauth(lib, &count);
            break;

        case 4:
            listTitle(lib, &count);
            break;

        case 5:
            printf("There are %d books in the Library\n", count);
            break;

        case 6:
            listInAccNum(lib, &count);
            break;

        case 7:
            printf("Enter the title: ");
            char Title[50];
            getchar();
            gets(Title);
            if(delete(lib, Title, &count))
                count--;
            break;

        case 8:
            exit(1);
        
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}
