#include<stdio.h>
#include<ctype.h>

int menuDrivenProgrma(int choice);
int restrauntMangSystem();
void tableAllocation();
void orderFood();
void viewBill();
void pressKey();
void mangerView();
void exitFun();
void mainFun();

int main(){

    mainFun();

    return 0;
}

void mainFun(){
    int choice;
    printf("1. Restraunt Management System\n");
    printf("2. Bank Management System\n");
    printf("3. Hospital Management System\n");
    printf("4. Exit\n");

    printf("Enter your choice:");
    scanf("%d",&choice);
    //printf("choice in main:%d",choice);

    menuDrivenProgrma(choice);
}

int menuDrivenProgrma(int choice){
    //printf("choice in function: %d",choice);
    
    // restraurant Management :
    if(choice ==1){
        
        restrauntMangSystem();
        
    }else if(choice ==2){
        printf("This choice is for unit conversion");
    }else if(choice ==3){
        printf("This choice for volume calculation");
    }else{
        printf("Take Rest!!!");
    }

    return 0;
}

int restrauntMangSystem(){
    int n;
    
    printf("Welcome to restraunt management system\n");
    printf("********************************************\n");
    printf("1. Table allocation\n");
    printf("2. Order food\n");
    printf("3. View Bill\n");
    printf("4. Manger overview\n");
    printf("5. Exit\n");
    printf("Enter your choice:");
    scanf("%d",&n);
    printf("\n");
    
    if(n ==1){
        tableAllocation();
    }else if(n==2){

        orderFood();

    }else if(n==3){
        viewBill();
    }else if(n==4){
        mangerView();
    }else{
        mainFun();
    }
    return 0;  
}

void tableAllocation(){
    int p;
    
    printf("Enter number of people:");
    scanf("%d",&p);
    printf("You have been allocated  table id:24\n");
    pressKey();
    
}

void orderFood(){
    int id;
    char ch;
    int i=1;
    
    printf("Enter table Id: ");
    scanf("%d",&id);

    printf("----------------MENU-------------\n");
    char item[10][10] ={"Vada","Dosa","Idly","Pizza","Burger","Upma","Meals","Naan","Curry","Ice"};
    int price[10] ={10,70,50,175,160,60,80,18,210,250};

    while(i<10){
        printf("%d  %s  %d\n",i,item[i],price[i]);
        i++;
    }
    printf("Enter the numbers you want to order one by one.\n");
    printf("When you finish, enter any charachter: \n");
    i=0;
    while(i<10){
        scanf(" %c",&ch);
        if(isdigit(ch)){
            continue;
        }else{
            break;
        }
        i++;
    }

    printf("Order has been placed successfully...!\n");
    pressKey();
    
}

void viewBill(){
    int id;
    
    printf("Enter table number: ");
    scanf("%d",&id);

    printf("---------BILL---------\n");

    int number[4] = {1,2,3,4};
    char item[4][10] = {"Pizza","Idly","Upma","Vada"};
    int count[4] = {1,1,2,2};
    int price[4] = {175,50,120,20};
    int total = 0;
    int i =0;


    while(i<4){
        printf("%d  %s  %d  %d\n",number[i],item[i],count[i],price[i]);
        total+= price[i];
        
        i++;
    }
    //printf("Finished!");

    printf("Total: %d\n",total);
    printf("Continue after payment...\n");
    printf("Thankyou! Visit again...\n");
    pressKey();

}

void pressKey(){
    char key;
    printf("Press any key to coutinue...\n");
    scanf(" %c",&key);
    if(key<=0 || key>=0 || key>='a' || key<='z' || key>='A' || key<='Z'){
        printf("\n");
        restrauntMangSystem();
    }
}

void mangerView(){
    printf("Number of groups in queue (2-seater): 1");
    printf("Number of groups in queue (4-seater): 0");
    printf("Number of groups in queue (6-seater): 1");
    pressKey();
}

void exitFun(){

    mainFun();
}


 