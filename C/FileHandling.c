// hi aaj Ham file handling ko basic se pura end krenge function through

// to chaliye suru krate hain

/*
    Easy sa concept to open a file
    
    FILE *fopen(const *char file_name, const *char file_mode);

    ye ek function se kisi text file open kr sakate hain easly

    first hme File ka ek pointer object banana hoga fir usme function ko add karna hoga

    file open karane a 6 normal modes hain aur 4 hybrid mode hain to total 10 modes hain

        _________________________________________________________________________________
       |          normal modes          |               hybrid modes                     |
       |--------------------------------|------------------------------------------------|
       | 1. w -- write mode             | 07. wb -- binary file's write mode             |
       | 2. r -- read mode              | 08. ab+ or a+b -- binary file's append mode    |
       | 3. a -- append mode            | 09. rt+ or a+t -- text file's update mode      |
       | 4. w+ -- write + read mode     | 10. rb -- read in binary modes                 |
       | 5. r+ -- read + write mode     |                                                |    
       | 6. a+ -- append + read mode    |                                                |             
       |________________________________|________________________________________________|   

        To close a file we use function
            1. int fclose(FILE *fptr);  ==>  it close a single file which is opened
            2. int fcloseall(void);     ==>  it close all file which is opened in program

        Improtant function jo use hoga hamre file handling me
             ____________________________________________________________________________________________________________________________________________
            |                       functions                                         |                     Their using purpose                          |
            |-------------------------------------------------------------------------|------------------------------------------------------------------|
            | 01. FILE *fopen(const *char file_name, const *char file_mode);          | For open a file                                                  |
            | 02. int fputc(int c, FILE *fptr);                                       | Use to write a character to the specied file                     |
            | 03. int fgetc(FILE *fptr);                                             | Use to read a single character from given file                   |
            | 04. int fputs(const char *str, FILE *fptr);                             | It put a sentence in a specified file                            |
            | 05. int gets(char *str, int n, FILE *fptr);                             | It give a sentence from a apecified file                         |
            | 06. int fprintf(FILE *fptr, const char *format[,argument,...]);         | It similar as printf it write formated data in file              |                                                |             
            | 07. int fscanf(FILE *fptr, const char *format[,address,...]);           | It reads data from file instead of standerd input                |
            | 08. size_t fwrite(const void *ptr, size_t size, size_t n, FILE *fptr);  | This function is used to write a entire block to given file      |
            | 09. size_t fread(void *ptr, size_t size, size_t n, File *fptr);         | This function is used to read a entire block to given file       |
            | 10. int fseek(FILE *fptr, long displacement, int origin);               | It use for setting a file position indicator at a specified byte |
            | 11. long ftell(FILE *fptr);                                             | It tell current position of file position indecator              |
            | 12. void rewind(FILE *fptr);                                            | It use move file position indecator to beginning                 |
            | 13. int feof(FILE *fptr);                                               | It is macro use to check end of file condition                   |
            | 14. int ferror(FILE *fptr);                                             | It check error occured during read and write file                |
            | 15. void clearerr(FILE *fptr) ;                                         | It use to set the end of file and error indecator to zero(0)     |
            | 16. void rename(const char *old_name, const char *new_name);            | It use to rename a file                                          |
            | 17. void perror(const char *str);                                       | Use to display a supply message by user along with error message |
            | 18. int remove(const chat *filename);                                   | It use to remove a file                                          |
            | 19. int ffulsh(FILE *fptr);                                             | Write any buffer unwrite output to the file associate with fptr  |
            | 20. FILE *tmpfile(void);                                                | Create a Temperory file open in wb+ modes                        |
            | 21. char * tmpnam(char str[L_tmpnam]);                                  | It used to genrata a Unique name of file                         |
            | 22. FILE *freopen(const char *filename, const char *modes, FILE *fptr); | It use to associate a new file with a pointer                    |
            |_________________________________________________________________________|__________________________________________________________________|
            
            here we know the fseek() origin
                  ________________________________________________
                  |    CONSTANT     |   VALUE  |     POSITION      |
                  |-----------------|----------|-------------------|
                  | 1. SEEK_SET     |    0     | Beginning og file |
                  | 2. SEEK_CURRENT |    1     | Current Position  |
                  | 3. SEEK_END     |    2     | End of File       |           
                  +-----------------+----------+-------------------+  


            ++++++++++++ Structure of a File Program  +++++++++++++++
                    int main(void){
                        FILE *fp;
                        fp = fopen("filename", "mode");
                        ----------------------
                        ----------------------
                        ----------------------
                        fclose(fp);
                        return 0;
                    }
        Ab one by one samaghate hain function ko
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Function1();
void Function2();
void Function3();
void Function4();
void Function5();
void Function6();
void Function7();
void Function8();
void Function9();

int main(void){
    // sbase pahale file banana hai aur usme value dalani hai to putc se karnge to create a new file
    // Function1();

    // fir es function me ham save data ko read out krenge using getc
    // Function2();

    // es function me ham append wale function to v reach out krange
    // Function3();

    // esme denkenge how to write a text in file using fputs
    // Function4();

    // esme dekhenge how to get written input from file using fgets
    // Function5();

    // in this two function we see the fprintf and fscanf
    // Function6();
    // Function7();

    // Now we understand fwrite function fread function
    // Function8();
    Function9();
}

void Function1(){
    FILE *fptr;
    fptr = fopen("first.txt","w");
    //agar check karana ho to kr sakate ho
    /*
        if(fptr = fopen("first.txt","w") == NULL){
            printf("Error to open file");
            exit(1);
        }
        lakin jab complex program kr rhe ho tab
    */
    int ch;
    printf("Enter a text in file : \n");
    while((ch = getchar()) != EOF)
        fputc(ch,fptr);
    // jab tab file me likhana ho tab tk type kro aur jaise hi typing ho jaye tab ctrl + z ya ctrl + d press kr dena file saved
    fclose(fptr);
}

void Function2(){
     FILE *fptr;
    fptr = fopen("first.txt","r");
    //agar check karana ho to kr sakate ho
    /*
        if(fptr = fopen("first.txt","r") == NULL){
            printf("Error to open file");
            exit(1);
        }
        lakin jab complex program kr rhe ho tab
    */
    int ch;
    printf("You Enter in text file : \n");
    while((ch = fgetc(fptr))!= EOF)
        printf("%c",ch); 
    // jab tab file me likhana ho tab tk type kro aur jaise hi typing ho jaye tab ctrl + z ya ctrl + d press kr dena file saved
    fclose(fptr);
}

void Function3(){
    FILE *fptr;
    fptr = fopen("first.txt","a");
    int ch;
    printf("Enter a text in file : \n");
    while((ch = getchar()) != EOF)
        fputc(ch,fptr);
    // jab tab file me likhana ho tab tk type kro aur jaise hi typing ho jaye tab ctrl + z ya ctrl + d press kr dena file saved
    fclose(fptr);
}

void Function4(){
    FILE *p = fopen("first.txt","w");
    char str[100];
    printf("ENTER TEXT:\n");
    while(gets(str) != NULL){
        strcat(str,"\n"); // it use to concate a new line
        fputs(str, p);
    }
    fclose(p);
}

void Function5(){
    FILE *p = fopen("first.txt","r");
    char str[100];
    printf("ENTER TEXT:\n");
    while(fgets(str,100,p) != NULL)
        printf("%s",str);
    fclose(p);
}

void Function6(){
    FILE *p = fopen("first.txt", "w");
    int age;
    char name[30];
    printf("Please Enter Your Name : ");
    scanf("%s",name);
    printf("Enter your age : ");
    scanf("%d",&age);
    fprintf(p,"%s is %d year old", name, age);
    fclose(p);
}

void Function7(){
    FILE *p = fopen("first.txt", "r");
    int age;
    char name[30];
    fscanf(p,"%s%d",name,&age);
    printf("\n Your Name is %s and your age is %d\n",name, age);
    fclose(p);
}

void Function8(){
    struct Record {
        char username[25];
        int id;
    } record;

    FILE *p = fopen("first.txt","wb");
    printf("Enter a No of Records: ");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter your username: ");
        scanf("%s",record.username);
        printf("Enter your id: ");
        scanf("%d",&record.id);
        fwrite(&record,sizeof(record),1,p);
    }
    fclose(p);
}

void Function9(){
    struct Record {
        char username[25];
        int id;
    } record;

    FILE *p = fopen("first.txt","rb");
    printf("You are Entered a Records: \n");
    int i = 1;
    while(fread(&record,sizeof(record),1,p) == 1)
        printf("%d. username - %s \t id - %d\n",i++,record.username,record.id);
    fclose(p);
}
