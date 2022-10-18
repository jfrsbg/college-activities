// Online C compiler to run C program online
//https://www.programiz.com/c-programming/online-compiler/
#include <stdio.h>
#include <stdlib.h>

void get_personal_data(){
    int bytes_name = 0, bytes_address = 0, bytes_phone = 0;   
    int nbytes = 100; 
    char *name, *address, *phone_number; 

    name = (char *)malloc(nbytes * sizeof(char));
    address = (char *)malloc(nbytes * sizeof(char));
    phone_number = (char *)malloc(nbytes * sizeof(char));

    while(bytes_name <= 3){
        
        printf ("Insira seu nome: ");
        bytes_name = getline (&name, &nbytes, stdin);

        if(bytes_name <= 3)
            puts ("Seu nome deve conter no minimo 3 caracteres");
    }

    while(bytes_address <= 10){
        printf ("Insira seu Endereco: ");
        bytes_address = getline (&address, &nbytes, stdin);

        if(bytes_address <= 10)
            puts ("Seu Endereco deve conter no minimo 10 caracteres");
    }

    while(bytes_phone <= 8){
        printf ("Insira seu telefone: ");
        bytes_phone = getline (&phone_number, &nbytes, stdin);

        if(bytes_phone <= 8)
            puts ("Seu telefone deve conter no minimo 8 caracteres");
    }

    printf("\n %s mora no endereco %s e seu telefone de contato eh %s", name, address, phone_number);
    
}

int main() {
    get_personal_data();

    return 0;
}

